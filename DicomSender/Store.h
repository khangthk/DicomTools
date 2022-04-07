#pragma once

#include <QThread>
#include <QString>

class Store : public QThread
{
  Q_OBJECT
public:
  explicit Store(const QString& host = "localhost", uint16_t port = 104,
                 const QString& local = "AE", const QString& target = "AE", const QStringList& files = {});
  ~Store();

protected:
  void run() override;

private:
  QString m_host;
  uint16_t m_port;
  QString m_local;
  QString m_target;
  QStringList m_files;

signals:
  void log(const QString& log);
  void result(const bool result);
  void progress(const int percent);
};
