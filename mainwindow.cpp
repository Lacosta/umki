#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "devicesetupdialog.h"
#include "iostream"
using namespace std;
MainWindow::MainWindow(QWidget *parent,int argc, char *argv[]) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // определяем интерфейс по ключу запуска
    ui->stackedWidget->setCurrentIndex(1);
    if (argc==2)
    {
    QString s = argv[1];
    if (s.toLower()=="-start")
        ui->stackedWidget->setCurrentIndex(0);
    if (s.toLower()=="-base")
        ui->stackedWidget->setCurrentIndex(1);
    if (s.toLower()=="-super")
        ui->stackedWidget->setCurrentIndex(2);

    }
    connect(ui->pushButton_29,SIGNAL(clicked()),this,SLOT(showsetup()));
    connect(ui->pushButton_32,SIGNAL(clicked()),this,SLOT(showsetup()));
    //------------------------------------------------------

}

void MainWindow::showsetup()
{
    {
DeviceSetupDialog d(this);
d.show();
d.exec();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
