#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QAbstractTableModel>

namespace tator
{
  class Playlist : public QAbstractTableModel
  {
    Q_OBJECT
  public:
    Playlist(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index,
		  int role = Qt::DisplayRole) const override;
  };
} // end of namespace tator
#endif
