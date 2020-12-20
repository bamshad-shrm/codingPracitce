#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::on_sumBtn_clicked()
{
    int firstNumber = ui->calculator::firstNumberLne->text().toInt();
    int secondNumber = ui->secondNumberLne->text().toInt();
    int sum = firstNumber + secondNumber;
    ui->resultLcd->display(sum);
}
