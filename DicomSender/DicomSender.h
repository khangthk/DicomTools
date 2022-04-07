#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DicomSender; }
QT_END_NAMESPACE

enum class flagSave
{
  host,
  port,
  local,
  target,
  dirs
};

class DicomSender : public QMainWindow
{
  Q_OBJECT

public:
  DicomSender(QWidget* parent = nullptr);
  ~DicomSender();

protected:
  void showEvent(QShowEvent* event);

private slots:
   void onOpen();
  void onEcho();
  void onSend();
  void send();

private:
  Ui::DicomSender* ui;
  QStringList m_files;
  QStringList m_dirs;

  void resetStatus();
  void loadSetting();
  void saveSetting();
  void addLog(const QString& log);
};
