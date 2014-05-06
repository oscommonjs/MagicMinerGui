#include "bfgexplorer.h"
#include "ui_bfgexplorer"

BFGExplorer::BFGExplorer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BFGExplorer)
{
    ui->setupUi(this);

    QString sPath = "/";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setRootPath(sPath);
    ui->treeView->setModel(dirmodel);
}

BFGExplorer::~BFGExplorer()
{
    delete ui;
}
