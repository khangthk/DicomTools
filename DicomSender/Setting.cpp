#include "stdafx.h"
#include "Setting.h"

void Setting::saveHost(const QString &host)
{
  QSettings setting;
  setting.setValue("Host", host);
}

QString Setting::getHost()
{
  QSettings setting;
  return setting.value("Host", "localhost").toString();
}

void Setting::savePort(const QString &port)
{
  QSettings setting;
  setting.setValue("Port", port);
}

QString Setting::getPort()
{
  QSettings setting;
  return setting.value("Port", "104").toString();
}

void Setting::saveLocal(const QString &title)
{
  QSettings setting;
  setting.setValue("Local", title);
}

QString Setting::getLocal()
{
  QSettings setting;
  return setting.value("Local", "AE").toString();
}

void Setting::saveTarget(const QString &title)
{
  QSettings setting;
  setting.setValue("Target", title);
}

QString Setting::getTarget()
{
  QSettings setting;
  return setting.value("Target", "AE").toString();
}

void Setting::saveDirs(const QStringList &dirs)
{
  QSettings setting;
  setting.setValue("Dirs", dirs);
}

QStringList Setting::getDirs()
{
  QSettings setting;
  return setting.value("Dirs", {}).toStringList();
}

