#pragma once

#include <QThread>

class Scan : public QThread
{
  Q_OBJECT
public:
  explicit Scan(const QString dir, QStringList& files);
  ~Scan();

protected:
  void run() override;

private:
  QString m_dir;
  QStringList* m_files;

signals:
  void done();
};

