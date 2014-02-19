#ifndef DEVICESETUPDIALOG_H
#define DEVICESETUPDIALOG_H

#include <QDialog>

namespace Ui {
class DeviceSetupDialog;
}

class DeviceSetupDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeviceSetupDialog(QWidget *parent = 0);
    ~DeviceSetupDialog();

private:
    Ui::DeviceSetupDialog *ui;
};

#endif // DEVICESETUPDIALOG_H
