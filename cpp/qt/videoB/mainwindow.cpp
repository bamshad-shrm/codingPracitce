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
    if (myCameraObj.checkCameraAvailability()){
        ui->dispLb->setText("The camera is avalable");
    }
    else {
        ui->dispLb->setText("Ther is no camera.");
    }


}
