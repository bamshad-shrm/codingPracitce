#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startBtn_clicked()
{
    myCameraObj.turnOnCamera();
}

void MainWindow::on_stopBtn_clicked()
{
    myCameraObj.stopCamera();
}

void MainWindow::on_pushButton_clicked()
{
    myCameraObj.startRecord();
}

void MainWindow::on_pushButton_2_clicked()
{
    myCameraObj.stopRecord();
}
