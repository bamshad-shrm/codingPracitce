#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mycamera.h"

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
    QString testing = myCameraObj.test();
    ui->dispLb->setText(testing);
}
