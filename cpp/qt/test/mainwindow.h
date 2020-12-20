#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> //Is used to define MainWindow class.

// Note: U is campital.
namespace Ui {
class MainWindow;
}

// MainWindow is a drived class from QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_helloBtn_clicked();

// Note: u in the pointer is lower case.
// ui is an objec of MainWindow class which is from Ui namespace.
// Because the ui is a pointer object, we can access its members via (->) operator.
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
