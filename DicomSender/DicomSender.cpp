#include "stdafx.h"
#include "Echo.h"
#include "Store.h"
#include "Scan.h"
#include "Setting.h"
#include "DicomSender.h"
#include "ui_DicomSender.h"

#define MAX_HISTORY 10

DicomSender::DicomSender(QWidget* parent)
  : QMainWindow(parent), ui(new Ui::DicomSender)
{
  ui->setupUi(this);
  ui->portEdit->setValidator(new QIntValidator(0, 99999));

  connect(ui->buttonOpen, &QPushButton::clicked, this, &DicomSender::onOpen);
  connect(ui->buttonEcho, &QPushButton::clicked, this, &DicomSender::onEcho);
  connect(ui->buttonSend, &QPushButton::clicked, this, &DicomSender::onSend);

  loadSetting();
  resetStatus();
}

DicomSender::~DicomSender()
{
  saveSetting();
  delete ui;
}

void DicomSender::showEvent(QShowEvent *event)
{
  QWidget::showEvent(event);
  setFixedSize(width(), height());
}

void DicomSender::onOpen()
{
  QString lastPath = (m_dirs.empty() ? QDir::currentPath() : m_dirs.at(0));
  QString dir = QFileDialog::getExistingDirectory(this, "Select Dicom Folder", lastPath,
                                                  QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

  if (!dir.isEmpty())
  {
    m_dirs.push_front(dir);
    m_dirs.removeDuplicates();

    while (m_dirs.size() > MAX_HISTORY)
    {
      m_dirs.removeLast();
    }

    ui->dirsList->clear();
    ui->dirsList->addItems(m_dirs);
  }
}

void DicomSender::onEcho()
{
  auto echo = new Echo(ui->hostEdit->text(), ui->portEdit->text().toUInt(),
                       ui->localEdit->text(), ui->targetEdit->text());

  connect(echo, &Echo::log, this, [&](const QString& log)
          {
            addLog(log);
          });

  connect(echo, &Echo::result, this, [&](const bool result)
          {
            QMessageBox msgBox(this);
            msgBox.setText(result ? "Echo succeeded." : "Echo failed.   ");
            msgBox.setIcon(result ? QMessageBox::Information : QMessageBox::Critical);
            msgBox.exec();
          });

  connect(echo, &Echo::started, this, [&]()
          {
            ui->buttonEcho->setEnabled(false);
          });

  connect(echo, &Echo::finished, this, [&]()
          {
            ui->buttonEcho->setEnabled(true);
            addLog("---------------------------------------------------------------------");
          });

  connect(echo, &Echo::finished, echo, &QObject::deleteLater);

  echo->start();
}

void DicomSender::onSend()
{
  if (ui->dirsList->currentText() == "")
  {
    QMessageBox msgBox(this);
    msgBox.setText("No files to send.");
    msgBox.setIcon(QMessageBox::Critical);
    msgBox.exec();
    return;
  }

  auto scan = new Scan(ui->dirsList->currentText(), m_files);
  connect(scan, &Scan::done, this, &DicomSender::send);
  connect(scan, &Scan::started, this, [&]()
          {
            ui->status->setText("Scanning..");
          });
  connect(scan, &Scan::finished, this, [&]()
          {
            resetStatus();
          });
  connect(scan, &Scan::finished, scan, &QObject::deleteLater);
  scan->start();
}

void DicomSender::send()
{
  if (m_files.size() == 0)
  {
    QMessageBox msgBox(this);
    msgBox.setText("No files to send.");
    msgBox.setIcon(QMessageBox::Critical);
    msgBox.exec();
  }
  else
  {
    auto store = new Store(ui->hostEdit->text(), ui->portEdit->text().toUInt(),
                           ui->localEdit->text(), ui->targetEdit->text(), m_files);

    connect(store, &Store::log, this, [&](const QString& log)
            {
              addLog(log);
            });

    connect(store, &Store::progress, ui->progressBar, &QProgressBar::setValue);

    connect(store, &Store::result, this, [&](const bool result)
            {
              QMessageBox msgBox(this);
              msgBox.setText(result ? "Send succeeded." : "Send failed.   ");
              msgBox.setIcon(result ? QMessageBox::Information : QMessageBox::Critical);
              msgBox.exec();
              resetStatus();
            });

    connect(store, &Store::started, this, [&]()
            {
              ui->buttonSend->setEnabled(false);
              ui->status->setText("Sending data...");
            });

    connect(store, &Store::finished, this, [&]()
            {
              ui->buttonSend->setEnabled(true);
              addLog("---------------------------------------------------------------------");
            });

    connect(store, &Store::finished, store, &QObject::deleteLater);

    store->start();
  }
}

void DicomSender::resetStatus()
{
  ui->status->setText("---");
  ui->progressBar->setValue(0);
}

void DicomSender::loadSetting()
{
  ui->hostEdit->setText(Setting::getHost());
  ui->portEdit->setText(Setting::getPort());
  ui->localEdit->setText(Setting::getLocal());
  ui->targetEdit->setText(Setting::getTarget());
  m_dirs = Setting::getDirs();
  ui->dirsList->clear();
  ui->dirsList->addItems(m_dirs);
}

void DicomSender::saveSetting()
{
  Setting::saveHost(ui->hostEdit->text());
  Setting::savePort(ui->portEdit->text());
  Setting::saveLocal(ui->localEdit->text());
  Setting::saveTarget(ui->targetEdit->text());
  Setting::saveDirs(m_dirs);
}

void DicomSender::addLog(const QString& log)
{
  ui->logEdit->moveCursor(QTextCursor::End);
  ui->logEdit->appendPlainText(log);
}
