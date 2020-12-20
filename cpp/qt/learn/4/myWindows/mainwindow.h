#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mydialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_window_triggered();

    void on_actionoptions_triggered();

    void on_actionopen_the_profile_form_triggered();

    void on_actionnewBtnWindow_triggered();

private:
    Ui::MainWindow *ui;
    myDialog *mDialog;
};

#endif // MAINWINDOW_H
