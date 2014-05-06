#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>

namespace Ui {
class fileDialog;
}

class fileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit fileDialog(QWidget *parent = 0);
    ~fileDialog();

private:
    Ui::fileDialog *ui;
    QFileSystemModel *dirModel;
    QFileSystemModel *fileModel;
};

#endif // FILEDIALOG_H
