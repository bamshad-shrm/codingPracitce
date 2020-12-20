#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class calculator;
}

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_sumBtn_clicked();

private:
    Ui::calculator *ui;
};

#endif // CALCULATOR_H
