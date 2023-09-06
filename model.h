#ifndef CHROMIUM_CACHE_VIEWER_MODEL_H
#define CHROMIUM_CACHE_VIEWER_MODEL_H

#include <QAbstractTableModel>

class Model : public QAbstractTableModel {
    Q_OBJECT
public:
    explicit Model(QObject *parent = nullptr);

    [[nodiscard]] int      rowCount(const QModelIndex &parent) const override;
    [[nodiscard]] int      columnCount(const QModelIndex &parent) const override;
    [[nodiscard]] QVariant data(const QModelIndex &index, int role) const override;
};

#endif   // CHROMIUM_CACHE_VIEWER_MODEL_H
