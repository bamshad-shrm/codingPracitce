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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool checkCameraAvailability();

private slots:
    void on_addBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
