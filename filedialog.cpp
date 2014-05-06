#include "filedialog.h"
#include "ui_filedialog.h"

fileDialog::fileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileDialog)
{
    ui->setupUi(this);

    QString sPath = "C:/";
    dirModel = new QFileSystemModel(this);
    dirModel->setRootPath(sPath);
    ui->treeView->setModel(dirModel);
    //fileModel = new QFileSystemModel(this);
}

fileDialog::~fileDialog()
{
    delete ui;
}
