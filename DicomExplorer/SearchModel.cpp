#include "stdafx.h"
#include "SearchModel.h"

SearchModel::SearchModel(QObject *parent)
  : QSortFilterProxyModel(parent)
{
}

bool SearchModel::filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const
{
  QModelIndex index0 = sourceModel()->index(sourceRow, 0, sourceParent);
  QModelIndex index1 = sourceModel()->index(sourceRow, 1, sourceParent);
  QModelIndex index2 = sourceModel()->index(sourceRow, 2, sourceParent);
  QModelIndex index3 = sourceModel()->index(sourceRow, 3, sourceParent);
  QModelIndex index4 = sourceModel()->index(sourceRow, 4, sourceParent);
  QModelIndex index5 = sourceModel()->index(sourceRow, 5, sourceParent);

  return (sourceModel()->data(index0).toString().contains(filterRegularExpression()) ||
          sourceModel()->data(index1).toString().contains(filterRegularExpression()) ||
          sourceModel()->data(index2).toString().contains(filterRegularExpression()) ||
          sourceModel()->data(index3).toString().contains(filterRegularExpression()) ||
          sourceModel()->data(index4).toString().contains(filterRegularExpression()) ||
          sourceModel()->data(index5).toString().contains(filterRegularExpression()) );
}
