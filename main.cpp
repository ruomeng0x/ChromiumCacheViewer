#include <QApplication>
#include <QTableView>

#include "model.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QTableView   tableView;
    Model        model;

    tableView.setModel(&model);
    tableView.resize(400, 300);
    tableView.show();

    return QApplication::exec();
}