#include "stdafx.h"
#include "DicomExplorer.h"
#include "ui_DicomExplorer.h"
#include "DicomHelper.h"
#include "TreeItem.h"

#include <QVector>

DicomExplorer::DicomExplorer(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::DicomExplorer), m_file("")
{
  ui->setupUi(this);
  setAcceptDrops(true);
  setCentralWidget(ui->treeView);

  m_searchEdit = new QLineEdit;
  m_searchEdit->setClearButtonEnabled(true);
  m_searchEdit->setPlaceholderText("Search...");
  m_searchEdit->setFixedHeight(30);
  ui->toolBar->addWidget(m_searchEdit);

  ui->statusbar->addPermanentWidget(new QLabel(""), 1);
  ui->statusbar->addPermanentWidget(new QLabel("DICOM Standard 2022a "), 0);

  connect(this, &DicomExplorer::open, this, &DicomExplorer::openFile);
  connect(ui->actionOpen, &QAction::triggered, this, &DicomExplorer::onOpen);
  connect(ui->actionExport, &QAction::triggered, this, &DicomExplorer::onExport);
  connect(ui->actionExpand, &QAction::triggered, this, &DicomExplorer::onExpand);
  connect(ui->actionCollapse, &QAction::triggered, this, &DicomExplorer::onCollapse);
  connect(ui->actionRefresh, &QAction::triggered, this, &DicomExplorer::onRefresh);
  connect(m_searchEdit, &QLineEdit::textChanged, this, &DicomExplorer::onSearchText);

  updateControl();
}

DicomExplorer::~DicomExplorer()
{
  delete ui;
}

void DicomExplorer::dragEnterEvent(QDragEnterEvent *event)
{
  qDebug() << "->dragEnterEvent";
  const QMimeData* mimeData = event->mimeData();
  auto files = mimeData->urls();
  if (files.size() != 1)
  {
    qDebug() << "wrong input";
    return;
  }

  auto file = files.at(0).toLocalFile();
  if (!(QFileInfo(file).isFile() && DicomHelper::isDicomFile(file)))
  {
    qDebug() << "not dicom file";
    return;
  }

  event->acceptProposedAction();
}

void DicomExplorer::dropEvent(QDropEvent *event)
{
  qDebug() << "->dropEvent";
  const QMimeData* mimeData = event->mimeData();
  if (!mimeData->hasUrls() || mimeData->urls().size() != 1)
  {
    return;
  }

  event->acceptProposedAction();

  emit open(mimeData->urls().at(0).toLocalFile());
}

void DicomExplorer::updateControl()
{
  bool open = !m_file.isEmpty();
  ui->actionExport->setEnabled(open);
  ui->actionCollapse->setEnabled(open);
  ui->actionExpand->setEnabled(open);
  ui->actionRefresh->setEnabled(open);
  m_searchEdit->setEnabled(open);

  if (m_searchEdit->isEnabled() && m_searchEdit->text().length() > 0)
  {
    emit m_searchEdit->textChanged(m_searchEdit->text());
  }
}

void DicomExplorer::openFile(const QString &file)
{
  if (!file.isEmpty())
  {
    if (!DicomHelper::isDicomFile(file))
    {
      QMessageBox::warning(this, "Error", "Unable to read file %1" + file, QMessageBox::Ok);
      return;
    }

    m_file = file;
    setWindowTitle(file);

    m_treeModel.reset(new TreeModel(file));
    m_searchModel.reset(new SearchModel(this));
    m_searchModel->setSourceModel(m_treeModel.get());
    m_searchModel->setRecursiveFilteringEnabled(true);

    ui->treeView->setModel(m_searchModel.get());
    ui->treeView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->treeView->header()->setDefaultAlignment(Qt::AlignCenter);
    ui->treeView->expandAll();
    ui->treeView->resizeColumnToContents(0);
    ui->treeView->resizeColumnToContents(1);
    ui->treeView->resizeColumnToContents(2);
    ui->treeView->resizeColumnToContents(3);
    ui->treeView->resizeColumnToContents(4);
    ui->treeView->setSortingEnabled(false);

    updateControl();
  }
}

void DicomExplorer::onOpen()
{
  openFile(QFileDialog::getOpenFileName(this, "Choose File"));
}

void DicomExplorer::onExport()
{
  std::function<void(TreeItem*, QVector<qsizetype>&, int)> fnGetMaxLength
    = [&fnGetMaxLength](TreeItem* item, QVector<qsizetype>& maxLengths, int indentLevel)
  {
    if (maxLengths.empty())
    {
      maxLengths = QVector<qsizetype>(6, 0);
    }

    for (auto i = 0; i < 6; i++)
    {
      if (i == 0)
      {
        maxLengths[i] = qMax<qsizetype>(maxLengths[i], indentLevel * 2 + item->data(i).toString().length());
      }
      else
      {
        maxLengths[i] = qMax<qsizetype>(maxLengths[i], item->data(i).toString().length());
      }
    }

    auto childs = item->childItems();
    int level = ++indentLevel;
    for (auto child : childs)
    {
      fnGetMaxLength(child, maxLengths, level);
    }
  };

  std::function<void(TreeItem*, QTextStream&, QVector<qsizetype>&, int)> fnAddLine
    = [&fnAddLine](TreeItem* item, QTextStream& stream, QVector<qsizetype>& maxLengths, int indentLevel)
  {
    auto fnGetIndentString = [](int indentLevel) -> QString
    {
      QString str;
      return str.leftJustified(indentLevel * 2, ' ');
    };

    QString tagValue;
    tagValue = fnGetIndentString(indentLevel) + item->data(0).toString();

    stream << tagValue.leftJustified(maxLengths[0], ' ') << "  |  "
           << item->data(1).toString().leftJustified(maxLengths[1], ' ') << "  |  "
           << item->data(2).toString().leftJustified(maxLengths[2], ' ') << "  |  "
           << item->data(3).toString().leftJustified(maxLengths[3], ' ') << "  |  "
           << item->data(4).toString().leftJustified(maxLengths[4], ' ') << "  |  "
           << item->data(5).toString() << Qt::endl;

    auto childs = item->childItems();
    int level = ++indentLevel;
    for (auto child : childs)
    {
      fnAddLine(child, stream, maxLengths, level);
    }
  };

  QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                  "*.txt", "Text Documents (*.txt)");

  if (!fileName.isEmpty())
  {
    QFile file(fileName);
    if (file.open(QFile::WriteOnly))
    {
      QTextStream stream(&file);
      auto item = m_treeModel->rootItem();
      QVector<qsizetype> maxLengths;
      fnGetMaxLength(item, maxLengths, -1);
      fnAddLine(m_treeModel->rootItem(), stream, maxLengths, -1);
      file.close();
    }
  }
}

void DicomExplorer::onExpand()
{
  ui->treeView->expandAll();
}

void DicomExplorer::onCollapse()
{
  ui->treeView->collapseAll();
}

void DicomExplorer::onRefresh()
{
  openFile(m_file);
}

void DicomExplorer::onSearchText(const QString &text)
{
  auto fnTextColor = [](const QPalette &palette) -> QColor
  {
    return palette.color(QPalette::Active, QPalette::Text);
  };

  auto fnSetTextColor = [&fnTextColor](QWidget *w, const QColor &c)
  {
    auto palette = w->palette();
    if (fnTextColor(palette) != c)
    {
      palette.setColor(QPalette::Active, QPalette::Text, c);
      w->setPalette(palette);
    }
  };

  auto options = QRegularExpression::NoPatternOption | QRegularExpression::CaseInsensitiveOption;
  QRegularExpression regularExpression(text, options);

  if (regularExpression.isValid())
  {
    m_searchModel->setFilterRegularExpression(regularExpression);
    fnSetTextColor(m_searchEdit, fnTextColor(style()->standardPalette()));
  }
  else
  {
    m_searchModel->setFilterRegularExpression(QRegularExpression());
    fnSetTextColor(m_searchEdit, Qt::red);
  }
}
