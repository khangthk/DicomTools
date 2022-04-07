#pragma once

#include <QString>
#include <QStringList>

class Setting
{
public:
  static void saveHost(const QString &host);
  static QString getHost();

  static void savePort(const QString &port);
  static QString getPort();

  static void saveLocal(const QString &title);
  static QString getLocal();

  static void saveTarget(const QString &title);
  static QString getTarget();

  static void saveDirs(const QStringList &dirs);
  static QStringList getDirs();
};
