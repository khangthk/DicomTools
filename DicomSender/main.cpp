#include "stdafx.h"
#include "DicomSender.h"
#include "Version.h"

#include <QApplication>

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  a.setOrganizationName(VER_COMPANYNAME_STR);
  a.setApplicationName(VER_PRODUCTNAME_STR);
  a.setApplicationVersion(VER_PRODUCTVERSION_STR);
  DicomSender w;
  w.show();
  return a.exec();
}
