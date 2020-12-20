#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QCamera>
#include<QCameraInfo>

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


bool checkCameraAvailability()
{
    if (QCameraInfo::availableCameras().count() > 0)
        return true;
    else
        return false;
}

void MainWindow::on_addBtn_clicked()
{
    int firstNumber = ui->firstNumberLnEd->text().toInt();
    int secondNumber = ui->secondNumberLnEd->text().toInt();
    int sumOfNumbers = firstNumber + secondNumber;
    ui->resultLb->setNum(sumOfNumbers);
}
