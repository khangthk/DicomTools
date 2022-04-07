#pragma once

class TreeItem
{
public:
  explicit TreeItem(const QVector<QVariant> &data, TreeItem *parent = nullptr);
  ~TreeItem();

  void appendChild(TreeItem *child);

  TreeItem *child(int row);
  int childCount() const;
  int columnCount() const;
  QVariant data(int column) const;
  int row() const;
  TreeItem *parent() const;
  const QVector<TreeItem *> &childItems() const;

private:
  QVector<TreeItem*> m_childItems;
  QVector<QVariant> m_itemData;
  TreeItem *m_parentItem;
};
