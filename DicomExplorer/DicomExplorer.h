#pragma once

#include "TreeModel.h"
#include "SearchModel.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DicomExplorer; }
QT_END_NAMESPACE

class DicomExplorer : public QMainWindow
{
  Q_OBJECT

public:
  DicomExplorer(QWidget *parent = nullptr);
  ~DicomExplorer();

protected:
  void dragEnterEvent(QDragEnterEvent *event) override;
  void dropEvent(QDropEvent *event) override;

private:
  Ui::DicomExplorer *ui;
  QLineEdit *m_searchEdit;
  QString m_file;
  std::unique_ptr<TreeModel> m_treeModel;
  std::unique_ptr<SearchModel> m_searchModel;

  void updateControl();

private slots:
  void openFile(const QString &file);
  void onOpen();
  void onExport();
  void onExpand();
  void onCollapse();
  void onRefresh();
  void onSearchText(const QString &text);

signals:
  void open(const QString &file);
};
