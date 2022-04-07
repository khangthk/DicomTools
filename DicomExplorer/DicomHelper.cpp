#include "stdafx.h"
#include "DicomHelper.h"
#include "TreeItem.h"

#include <gdcmReader.h>
#include <gdcmImageReader.h>
#include <gdcmDataSet.h>
#include <gdcmFile.h>
#include <gdcmFileMetaInformation.h>
#include <gdcmGlobal.h>
#include <gdcmDicts.h>
#include <gdcmDictEntry.h>
#include <gdcmTag.h>
#include <gdcmDataSetHelper.h>

const VL MaxPrintLength = 0x100;

bool DicomHelper::isDicomFile(const QString &file)
{
  Reader reader;
  reader.SetFileName(file.toUtf8());
  return reader.Read();
}

bool DicomHelper::isDicomImage(const QString &file)
{
  ImageReader reader;
  reader.SetFileName(file.toUtf8());
  return reader.Read();
}

QMap<QString, QStringList> DicomHelper::getListSeriesFromDir(const QString &dir)
{
  QMap<QString, QStringList> map;
  QDirIterator it(dir, QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
  while (it.hasNext())
  {
    QString dcmFile = it.next();
    Reader reader;
    reader.SetFileName(dcmFile.toUtf8());
    if (!reader.Read())
    {
      continue;
    }

    File& file = reader.GetFile();
    DataSet& ds = file.GetDataSet();

    Tag seriesInstanceUID(0x0020, 0x000E);

    if (!ds.FindDataElement(seriesInstanceUID) || ds.GetDataElement(seriesInstanceUID).IsEmpty())
    {
      continue;
    }

    const DataElement& de = ds.GetDataElement(seriesInstanceUID);
    const ByteValue* bv = de.GetByteValue();
    std::string value;
    if (bv)
    {
      value = std::string(bv->GetPointer(), bv->GetLength());
    }

    auto& files = map[QString::fromStdString(value)];
    files.push_back(dcmFile);
  }

  return map;
}

QStringList DicomHelper::getDicomFilesFromDir(const QString &dir)
{
  QStringList files;
  QDirIterator it(dir, QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
  while (it.hasNext())
  {
    QString dcmFile = it.next();
    Reader reader;
    reader.SetFileName(dcmFile.toUtf8());
    if (!reader.Read())
    {
      continue;
    }

    files.push_back(dcmFile);
  }

  return files;
}

void addDataSet(const File &file, const DataSet &ds, TreeItem *parent)
{
  const Dicts &dicts = Global::GetInstance().GetDicts();
  gdcm::DataSet::ConstIterator it = ds.Begin();

  for (; it != ds.End(); it++) {
    QVector<QVariant> data;
    const DataElement &de = *it;
    const SequenceOfFragments *sqf = de.GetSequenceOfFragments();
    VR refvr = DicomHelper::getDataElement(file, dicts, ds, de, data);
    auto child = new TreeItem(data, parent);
    parent->appendChild(child);

    if(refvr == VR::SQ)
    {
      SmartPointer<SequenceOfItems> sqi = de.GetValueAsSQ();
      if (sqi)
      {
        DicomHelper::getSQ(file, sqi, child);
      }
    }
    else if (sqf)
    {
      const BasicOffsetTable & table = sqf->GetTable();
      DicomHelper::getDataElement(file, dicts, ds, table, data);
      auto childTable = new TreeItem(data, child);
      child->appendChild(childTable);
      size_t numfrag = sqf->GetNumberOfFragments();
      for(size_t i = 0; i < numfrag; ++i)
      {
        const Fragment& frag = sqf->GetFragment(i);
        DicomHelper::getDataElement(file, dicts, ds, frag, data);
        child->appendChild(new TreeItem(data, child));
      }

      std::ostringstream os;
      const Tag seqDelItem(0xfffe,0xe0dd);
      os << seqDelItem;
      data.clear();
      data << QString::fromStdString(os.str()).toUpper() << "Sequence Delimitation Item" << "" << "" << "" << "";
      parent->appendChild(new TreeItem(data, parent));
    }
  }
}

void DicomHelper::initModelData(const QString &file, TreeItem *parent)
{
  Reader reader;
  reader.SetFileName(file.toUtf8());
  if (reader.Read())
  {
    const FileMetaInformation &meta = reader.GetFile().GetHeader();
    addDataSet(reader.GetFile(), meta, parent);
    const DataSet &ds = reader.GetFile().GetDataSet();
    addDataSet(reader.GetFile(), ds, parent);
  }
}

#define StringFilterCase(type) \
  case VR::type: \
  { \
    Element<VR::type,VM::VM1_n> el; \
    if(!de.IsEmpty()) { \
    el.Set(de.GetValue()); \
    if(el.GetLength()) { \
    os << "" << el.GetValue(); \
    long l = std::min((long) el.GetLength(), (long) (MaxPrintLength / VR::GetLength(VR::type))); \
    for(long i = 1; i < l; ++i) os << "\\" << el.GetValue((unsigned int)i); \
    os << ""; } \
    else { if(de.IsEmpty()) os << ""; \
             else os << "VR=" << refvr << " is incompatible with length"; } } \
    else { assert(de.IsEmpty()); os << ""; } \
  } break

VR DicomHelper::getDataElement(const File &file, const Dicts &dicts, const DataSet &ds,
                               const DataElement &de, QVector<QVariant> &data)
{
  QString dataTag;
  QString dataDescription;
  QString dataVR;
  QString dataVM;
  QString dataLength;
  QString dataValue;
  std::ostringstream os;

  const ByteValue *bv = de.GetByteValue();
  const SequenceOfItems *sqi = nullptr; //de.GetSequenceOfItems();
  const SequenceOfFragments *sqf = de.GetSequenceOfFragments();

  std::string strowner;
  const char *owner = nullptr;
  const Tag& t = de.GetTag();
  if(t.IsPrivate() && !t.IsPrivateCreator())
  {
    strowner = ds.GetPrivateCreator(t);
    owner = strowner.c_str();
  }
  const DictEntry &entry = dicts.GetDictEntry(t,owner);
  const VR &vr = entry.GetVR();
  const VM &vm = entry.GetVM();
  const char *name = entry.GetName();
  const VR &vr_read = de.GetVR();
  const VL &vl_read = de.GetVL();

  os.str("");
  os << t;
  dataTag = QString::fromStdString(os.str()).toUpper();

  os.str("");
  os << vr_read;
  dataVR = QString::fromStdString(os.str());

  VR refvr;
  // always prefer the vr from the file:
  if(vr_read == VR::INVALID)
  {
    refvr = vr;
  }
  else if (vr_read == VR::UN && vr != VR::INVALID) // File is explicit, but still prefer vr from dict when UN
  {
    refvr = vr;
  }
  else // cool the file is Explicit !
  {
    refvr = vr_read;
  }
  if(vr.IsDual()) // Always check
  {
    refvr = DataSetHelper::ComputeVR(file, ds, t);
  }

  assert(refvr != VR::US_SS);
  assert(refvr != VR::OB_OW);

  if(!de.IsEmpty())
  {
    const Value &value = de.GetValue();
    if(dynamic_cast<const SequenceOfItems*>(&value))
    {
      sqi = de.GetValueAsSQ();
      refvr = VR::SQ;
      assert(refvr == VR::SQ);
    }
  }

  if ((vr_read == VR::INVALID || vr_read == VR::UN) && vl_read.IsUndefined())
  {
    assert(refvr == VR::SQ);
  }

  if(vr != VR::INVALID && (!vr.Compatible(vr_read) || vr_read == VR::INVALID || vr_read == VR::UN || vr_read != refvr))
  {
    assert(vr != VR::INVALID);

    if(vr == VR::US_SS || vr == VR::OB_OW)
    {
      os.str("");
      os << refvr;
      dataVR = QString::fromStdString(os.str());

    }
    else
    {
      os.str("");
      os << vr;
      dataVR = QString::fromStdString(os.str());
    }
  }
  else if(sqi && refvr == VR::INVALID)
  {
    // when vr == VR::INVALID and vr_read is also VR::INVALID, we have a seldom case where we can guess the vr
    // eg. CD1/647662/647663/6471066 has a SQ at (2001,9000)

    os.str("");
    os << "SQ";
    dataVR = QString::fromStdString(os.str());
    assert(refvr == VR::INVALID);
    refvr = VR::SQ;
  }

  // Print Value now
  os.str("");
  if(refvr & VR::VRASCII)
  {
    assert(!sqi && !sqf);
    if(bv)
    {
      VL l = std::min(bv->GetLength(), MaxPrintLength);
      bv->PrintASCII(os, l);
    }
    else
    {
      assert(de.IsEmpty());
      os << ""; // No value
    }
  }
  else
  {
    assert(refvr & VR::VRBINARY || (vr == VR::INVALID && refvr == VR::INVALID));
    switch(refvr)
    {
      StringFilterCase(AT);
      StringFilterCase(FL);
      StringFilterCase(FD);
      StringFilterCase(OD);
      StringFilterCase(OF);
      StringFilterCase(SL);
      StringFilterCase(SS);
      StringFilterCase(UL);
      StringFilterCase(US);
      StringFilterCase(SV);
      StringFilterCase(UV);
      case VR::OB:
      case VR::OW:
      case VR::OL:
      case VR::OV:
      case VR::OB_OW:
      case VR::UN:
      case VR::US_OW:
      case VR::US_SS_OW:
      {
        if (bv)
        {
          VL l = std::min(bv->GetLength(), MaxPrintLength);
          bool dotdotdot = false;
          if (bv->GetLength() > l) dotdotdot = true;
          bv->PrintHex(os, MaxPrintLength / 4);
          os << (dotdotdot ? "..." : "");
        }
        else if (sqf)
        {
          assert(t == Tag(0x7fe0,0x0010));
        }
        else if (sqi)
        {
          gdcmErrorMacro("Should not happen: VR=UN but contains a SQ");
        }
        else
        {
          assert(!sqi && !sqf);
          assert(de.IsEmpty());
          os << ""; // No value
        }

        break;
      }

      case VR::US_SS:
        // impossible...
        assert(refvr != VR::US_SS);
        break;
      case VR::SQ:
        break;
        // Let's be a little more helpful and try to print anyway when possible:
      case VR::INVALID:
      {
        if(bv)
        {
          VL l = std::min(bv->GetLength(), static_cast<VL>(MaxPrintLength / 8));
          bool dotdotdot = false;
          if (bv->GetLength() > l) dotdotdot = true;
          if(bv->IsPrintable(l))
          {
            bv->PrintASCII(os, MaxPrintLength / 8);
            os << (dotdotdot ? "..." : "");
          }
          else if (t == Tag(0xfffe,0xe000))
          {
            bv->PrintHex(os, MaxPrintLength / 8);
            os << (dotdotdot ? "..." : "");
          }
          else
          {
            // << "(non-printable character found)"
            bv->PrintHex(os, MaxPrintLength / 8);
            os << (dotdotdot ? "..." : "");
          }
        }
        else
        {
          assert(!sqi && !sqf);
          assert(de.IsEmpty());
          os << ""; // No value
        }
      }
      break;

      /* ASCII are treated elsewhere but we do not want to use default: here to get warnings */
      /* hopefully compiler is smart and remove dead switch/case */
      case VR::AE:
      case VR::AS:
      case VR::CS:
      case VR::DA:
      case VR::DS:
      case VR::DT:
      case VR::IS:
      case VR::LO:
      case VR::LT:
      case VR::PN:
      case VR::SH:
      case VR::ST:
      case VR::TM:
      case VR::UC:
      case VR::UI:
      case VR::UR:
      case VR::UT:
      /* others */
      case VR::VL16:
      case VR::VL32:
      case VR::VRASCII:
      case VR::VRBINARY:
      case VR::VR_VM1:
      case VR::VRALL:
      case VR::VR_END:
        assert(0);
        break;
    }
  }
  dataValue = QString::fromStdString(os.str());

  // Extra info (not in the file)
  // Append the VL
  os.str("");
  if(vl_read.IsUndefined())
  {
    os << "u/l";
  }
  else if (vl_read.IsOdd())
  {
    os << vl_read + 1;
  }
  else
  {
    os << std::dec << vl_read;
  }
  dataLength = QString::fromStdString(os.str());

  // Append the VM
  os.str("");
  if(vm != VM::VM0)
  {
    os << vm;
  }
  else
  {
    os << "?";
  }
  VM guessvm = VM::VM0;
  if(refvr & VR::VRASCII)
  {
    assert(refvr != VR::INVALID);
    assert(refvr & VR::VRASCII);
    if(bv)
    {
      size_t count = VM::GetNumberOfElementsFromArray(bv->GetPointer(), bv->GetLength());
      guessvm = VM::GetVMTypeFromLength(count, 1);
    }
  }
  else if(refvr & VR::VRBINARY)
  {
    assert(refvr != VR::INVALID);
    assert(refvr & VR::VRBINARY);
    if(refvr & VR::OB_OW || refvr == VR::OD || refvr == VR::OF || refvr == VR::SQ)
    {
      guessvm = VM::VM1;
    }
    else if (refvr == VR::UN && sqi)
    {
      // This is a SQ / UN
      guessvm = VM::VM1;
    }
    else if(bv)
    {
      guessvm = VM::GetVMTypeFromLength(bv->GetLength(), refvr.GetSize());
    }
    else
    {
      if(de.IsEmpty()) guessvm = VM::VM0;
      else assert(0 && "Impossible");
    }
  }
  else if(refvr == VR::INVALID)
  {
    refvr = VR::UN;
    guessvm = VM::VM1;
  }
  else
  {
    // Burst into flames !
    assert(0 && "Impossible happen");
  }
  if(!vm.Compatible(guessvm))
  {
    os.str("");
    os << guessvm;
  }
  dataVM = QString::fromStdString(os.str());

  // Append the name now
  os.str("");
  os << (name && *name ? name : "Unknow");
  dataDescription = QString::fromStdString(os.str());

  data.clear();
  data << dataTag.trimmed() << dataDescription.trimmed()
       << dataVR.trimmed() << dataVM.trimmed()
       << dataLength.trimmed() << dataValue.trimmed();
  return refvr;
}

void DicomHelper::getSQ(const File &file, const SequenceOfItems *sqi, TreeItem *parent)
{
  if (sqi)
  {
    std::ostringstream os;
    QVector<QVariant> data;
    SequenceOfItems::ItemVector::const_iterator it = sqi->Items.begin();
    for(; it != sqi->Items.end(); ++it)
    {
      const Item &item = *it;
      const DataSet &ds = item.GetNestedDataSet();
      const DataElement &deitem = item;

      os.str("");
      os << deitem.GetTag();
      data.clear();
      data << QString::fromStdString(os.str()).toUpper();

      if( deitem.GetVL().IsUndefined() )
      {
        data << "Item with undefined length";
      }
      else
      {
        data << "Item with defined length";
      }

      data << "" << "" << "" << "";
      auto child = new TreeItem(data, parent);
      parent->appendChild(child);

      addDataSet(file, ds, child);
      if( deitem.GetVL().IsUndefined() )
      {
        const Tag itemDelItem(0xfffe,0xe00d);
        os.str("");
        os << itemDelItem;
        data.clear();
        data << QString::fromStdString(os.str()).toUpper() << "Item Delimitation Item" << "" << "" << "" << "";
        parent->appendChild(new TreeItem(data, parent));
      }
    }

    if(sqi->GetLength().IsUndefined())
    {
      const Tag seqDelItem(0xfffe,0xe0dd);
      os.str("");
      os << seqDelItem;
      data.clear();
      data << QString::fromStdString(os.str()).toUpper() << "Sequence Delimitation Item" << "" << "" << "" << "";
      parent->parent()->appendChild(new TreeItem(data, parent->parent()));
    }
  }
}
