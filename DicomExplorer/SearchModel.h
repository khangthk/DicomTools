#pragma once

#include <QSortFilterProxyModel>

class SearchModel : public QSortFilterProxyModel
{
  Q_OBJECT
public:
  explicit SearchModel(QObject *parent = nullptr);

protected:
  virtual bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const override;
};
