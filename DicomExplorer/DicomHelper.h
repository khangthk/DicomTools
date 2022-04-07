#pragma once

#include <gdcmDataSet.h>
#include <gdcmDicts.h>
#include <gdcmDataElement.h>
#include <gdcmVR.h>

using namespace gdcm;

class TreeItem;

class DicomHelper
{
public:
  static bool isDicomFile(const QString &file);
  static bool isDicomImage(const QString &file);
  static QMap<QString, QStringList> getListSeriesFromDir(const QString &dir);
  static QStringList getDicomFilesFromDir(const QString &dir);
  static void initModelData(const QString &file, TreeItem *parent);
  static VR getDataElement(const File &file, const Dicts &dicts, const DataSet &ds,
                           const DataElement &de, QVector<QVariant> &data);
  static void getSQ(const File &file, const SequenceOfItems *sqi, TreeItem *parent);
};
