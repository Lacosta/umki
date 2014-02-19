/********************************************************************************
** Form generated from reading UI file 'devicesetupdialog.ui'
**
** Created: Wed Feb 19 02:53:34 2014
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESETUPDIALOG_H
#define UI_DEVICESETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DeviceSetupDialog
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QTextEdit *textEdit_3;
    QLabel *label_3;
    QTextEdit *textEdit_4;
    QLabel *label_4;

    void setupUi(QDialog *DeviceSetupDialog)
    {
        if (DeviceSetupDialog->objectName().isEmpty())
            DeviceSetupDialog->setObjectName(QString::fromUtf8("DeviceSetupDialog"));
        DeviceSetupDialog->setWindowModality(Qt::NonModal);
        DeviceSetupDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeviceSetupDialog->sizePolicy().hasHeightForWidth());
        DeviceSetupDialog->setSizePolicy(sizePolicy);
        DeviceSetupDialog->setMinimumSize(QSize(400, 300));
        DeviceSetupDialog->setMaximumSize(QSize(400, 300));
        DeviceSetupDialog->setSizeGripEnabled(false);
        DeviceSetupDialog->setModal(true);
        textEdit = new QTextEdit(DeviceSetupDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 40, 104, 31));
        pushButton = new QPushButton(DeviceSetupDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 240, 80, 41));
        pushButton_2 = new QPushButton(DeviceSetupDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 240, 80, 41));
        pushButton_3 = new QPushButton(DeviceSetupDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 240, 80, 41));
        label = new QLabel(DeviceSetupDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 101, 16));
        textEdit_2 = new QTextEdit(DeviceSetupDialog);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 40, 104, 31));
        label_2 = new QLabel(DeviceSetupDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 20, 101, 16));
        textEdit_3 = new QTextEdit(DeviceSetupDialog);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(20, 110, 104, 31));
        label_3 = new QLabel(DeviceSetupDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 101, 16));
        textEdit_4 = new QTextEdit(DeviceSetupDialog);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(20, 170, 104, 31));
        label_4 = new QLabel(DeviceSetupDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 150, 101, 16));

        retranslateUi(DeviceSetupDialog);

        QMetaObject::connectSlotsByName(DeviceSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *DeviceSetupDialog)
    {
        DeviceSetupDialog->setWindowTitle(QApplication::translate("DeviceSetupDialog", "Device Setup", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DeviceSetupDialog", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DeviceSetupDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("DeviceSetupDialog", "Apply", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeviceSetupDialog", "Left driving gear:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DeviceSetupDialog", "Right driving gear:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DeviceSetupDialog", "Mac-adress:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DeviceSetupDialog", "Group:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeviceSetupDialog: public Ui_DeviceSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESETUPDIALOG_H
