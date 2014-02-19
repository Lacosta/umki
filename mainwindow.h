#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0,int argc=1, char *argv[]=0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
private slots:
 void showsetup();
};

#endif // MAINWINDOW_H
