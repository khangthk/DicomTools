#include "stdafx.h"
#include "DicomExplorer.h"

#include <QApplication>
#include <QSurfaceFormat>

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  DicomExplorer w;
  w.show();
  return a.exec();
}
