#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int))); //It is a macro and NOT function.
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar_2,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
