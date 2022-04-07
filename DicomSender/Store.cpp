#include "stdafx.h"
#include "Store.h"

#include <gdcmReader.h>
#include <gdcmAttribute.h>
#include <gdcmEvent.h>
#include <gdcmULConnectionManager.h>
#include <gdcmSimpleSubjectWatcher.h>
#include <gdcmProgressEvent.h>
#include <gdcmPresentationContextGenerator.h>

using namespace gdcm;

class SendWatcher : public SimpleSubjectWatcher
{
public:
  SendWatcher(Subject* s, const char* comment = "cstore", Store* parent = nullptr, const size_t n = 1)
    :SimpleSubjectWatcher(s, comment), m_index(0), m_totalFile(n), m_progress(0), m_refProgress(0), m_parent(parent)
  {
  }

  void ShowIteration() override
  {
    m_index++;
    assert(m_index <= m_totalFile);
    m_refProgress = m_progress;
  }

  void ShowProgress(Subject* caller, const Event& evt) override
  {
    Q_UNUSED(caller);
    const ProgressEvent& pe = dynamic_cast<const ProgressEvent&>(evt);
    m_progress = m_refProgress + (100 / static_cast<double>(m_totalFile)) * pe.GetProgress();
    qDebug() << "Progress: " << m_progress;
    emit m_parent->progress(static_cast<int>(m_progress + 0.5));
  }

  void ShowDataSet(Subject *caller, const Event &evt) override
  {
    Q_UNUSED(caller);
    Q_UNUSED(evt);
  }

private:
  size_t m_index;
  size_t m_totalFile;
  double m_progress;
  double m_refProgress;
  Store* m_parent;

signals:
  void progress(int);
};

Store::Store(const QString& host /*= "localhost"*/, uint16_t port /*= 104*/,
             const QString& local /*= "AE"*/, const QString& target /*= "AE"*/, const QStringList& files /*= {}*/)
  : m_host(host), m_port(port), m_local(local), m_target(target), m_files(files)
{
}

Store::~Store()
{
  qDebug() << "~Store";
}

void Store::run()
{
  Directory::FilenamesType fileList;
  fileList.reserve(m_files.size());

  for (auto& file : m_files)
  {
    fileList.push_back(file.toStdString());
  }

  SmartPointer<network::ULConnectionManager> ps = new network::ULConnectionManager;
  network::ULConnectionManager& theManager = *ps;

  SendWatcher watcher(ps, "cstore", this, m_files.size());

  // Generate the PresentationContext array from the File-Set:
  PresentationContextGenerator generator;
  if (!generator.GenerateFromFilenames(fileList))
  {
    emit log("[SEND] Failed to generate presentation context");
    emit result(false);
    return;
  }

  if (!theManager.EstablishConnection(m_local.toStdString(),
                                      m_target.toStdString(),
                                      m_host.toStdString(),
                                      0,
                                      m_port,
                                      1000,
                                      generator.GetPresentationContexts()))
  {
    emit log("[SEND] Failed to establish connection");
    emit result(false);
    return;
  }

  QString fileErr;
  bool ret = true; // by default no error
  try
  {
    auto total = m_files.size();
    for (auto i = 0; i < total; ++i)
    {
      QString fileName = QFileInfo(m_files.at(i)).fileName();
      fileErr = fileName;
      emit log("[SEND] Processing: " + fileName);

      Reader reader;
      reader.SetFileName(m_files.at(i).toUtf8());
      if (!reader.Read())
      {
        emit log("[SEND] Could not read: " + fileName);
        emit result(false);
        return;
      }
      const File& file = reader.GetFile();
      std::vector<DataSet> theDataSets;
      theDataSets = theManager.SendStore(file);
      if (theDataSets.empty())
      {
        emit log("[SEND] Could not C-STORE: " + fileName);
        emit result(false);
        return;
      }
      assert(theDataSets.size() == 1);
      const DataSet& ds = theDataSets[0];
      assert(ds.FindDataElement(Tag(0x0, 0x0900)));
      DataElement const& de = ds.GetDataElement(Tag(0x0, 0x0900));
      Attribute<0x0, 0x0900> at;
      at.SetFromDataElement(de);
      // PS 3.4 - 2011
      // Table W.4-1 C-STORE RESPONSE STATUS VALUES
      const uint16_t theVal = at.GetValue();
      // http://dicom.nema.org/medical/dicom/current/output/chtml/part07/chapter_C.html
      if (theVal == 0x0) // Success
      {
        emit log("[SEND] C-Store of file " + fileName + " was successful");
      }
      else if (theVal == 0x0001 || (theVal & 0xf000) == 0xb000) // Warning
      {
        emit log("[SEND] C-Store of file " + fileName + " had a warning");
      }
      else if ((theVal & 0xf000) == 0xa000 || (theVal & 0xf000) == 0xc000) // Failure
      //case 0xA700:
      //case 0xA900:
      //case 0xC000:
      {
        // TODO: value from 0901 ?
        emit log("[SEND] C-Store of file " + fileName + " was a failure");
        Attribute<0x0, 0x0902> errormsg;
        errormsg.SetFromDataSet(ds);
        const char* themsg = errormsg.GetValue();
        assert(themsg); (void)themsg;
        emit log("[SEND] Response Status: " + QString(themsg));
        ret = false; // at least one file was not sent correctly
      }
      else
      {
        emit log("[SEND] Unhandled error code: " + QString(theVal));
      }

      theManager.InvokeEvent(IterationEvent());
    }
  }
  catch (Exception& e)
  {
    // If you reach here this is basically because GDCM does not support encoding other
    // than raw transfer syntax (Little Endian Explicit/Implicit...)
    theManager.BreakConnection(-1); // wait for a while for the connection to break, ie, infinite
    emit log("[SEND] C-Store of file " + fileErr + " was unsuccessful, aborting");
    emit log("[SEND] Error was " + QString(e.what()));
    emit result(false);
    return;
  }
  catch (...)
  {
    theManager.BreakConnection(-1); // wait for a while for the connection to break, ie, infinite
    emit log("[SEND] C-Store of file " + fileErr + " was unsuccessful, aborting");
    emit result(false);
    return;
  }
  theManager.BreakConnection(-1); // wait for a while for the connection to break, ie, infinite

  emit log("[SEND] Done" + QString(" %1 files").arg(fileList.size()));
  emit result(ret);

  return;
}
