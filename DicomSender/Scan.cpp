#include "stdafx.h"
#include "Scan.h"
#include "gdcmReader.h"

Scan::Scan(const QString dir, QStringList& files)
  : m_dir(dir), m_files(&files)
{
  m_files->clear();
}

Scan::~Scan()
{
  qDebug() << "~Scan";
}

void Scan::run()
{
  QDirIterator it(m_dir, QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);

  while (it.hasNext())
  {
    it.next();
    gdcm::Reader reader;
    reader.SetFileName(it.filePath().toUtf8());
    if (reader.CanRead())
    {
      m_files->push_back(it.filePath());
    }
  }

  QCollator collator;
  collator.setNumericMode(true);

  std::sort(m_files->begin(), m_files->end(), [&collator](const QString &s1, const QString &s2)
            {
              return collator.compare(s1, s2) < 0;
            });

  emit done();
}
