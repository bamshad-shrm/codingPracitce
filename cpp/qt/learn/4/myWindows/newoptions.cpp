#include "newoptions.h"
#include "ui_newoptions.h"

newOptions::newOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newOptions)
{
    ui->setupUi(this);
}

newOptions::~newOptions()
{
    delete ui;
}
