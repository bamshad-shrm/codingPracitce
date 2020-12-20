#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include "newoptions.h"
#include "profileform.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_window_triggered()
{


}

void MainWindow::on_actionoptions_triggered()
{
    newOptions myOptions;
    myOptions.setModal(true);
    myOptions.exec();
}

void MainWindow::on_actionopen_the_profile_form_triggered()
{
    profileForm myProfileForm;
    myProfileForm.setModal(true);
    myProfileForm.exec();
}

void MainWindow::on_actionnewBtnWindow_triggered()
{
    profileForm myProfileForm;
    myProfileForm.setModal(true);
    myProfileForm.exec();
}
