#include "profileform.h"
#include "ui_profileform.h"

profileForm::profileForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profileForm)
{
    ui->setupUi(this);
}

profileForm::~profileForm()
{
    delete ui;
}
