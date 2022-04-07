#pragma once

#include <QThread>
#include <QString>

class Echo : public QThread
{
  Q_OBJECT
public:
  explicit Echo(const QString& host = "localhost", uint16_t port = 104,
                const QString& local = "AE", const QString& target = "AE");
  ~Echo();

protected:
  void run() override;

private:
  QString m_host;
  uint16_t m_port;
  QString m_local;
  QString m_target;

signals:
  void log(const QString& log);
  void result(const bool result);
};

