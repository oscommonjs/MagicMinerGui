#ifndef BFGEXPLORER_H
#define BFGEXPLORER_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>

namespace Ui {
class BFGExplorer;
}

class BFGExplorer : public QDialog
{
    Q_OBJECT

public:
    explicit BFGExplorer(QWidget *parent = 0);
    ~BFGExplorer();

private:
    Ui::BFGExplorer *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;

};

#endif // BFGEXPLORER_H
