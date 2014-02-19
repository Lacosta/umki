#include "devicesetupdialog.h"
#include "ui_devicesetupdialog.h"

DeviceSetupDialog::DeviceSetupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeviceSetupDialog)
{
    ui->setupUi(this);
}

DeviceSetupDialog::~DeviceSetupDialog()
{
    delete ui;

}
