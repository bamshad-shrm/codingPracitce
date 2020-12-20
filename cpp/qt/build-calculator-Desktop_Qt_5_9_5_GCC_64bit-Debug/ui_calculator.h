/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralWidget;
    QLineEdit *firstNumberLne;
    QLineEdit *secondNumberLne;
    QLabel *firstNumberLbl;
    QLabel *secondNumberLbl;
    QPushButton *sumBtn;
    QLabel *resultLbl;
    QLCDNumber *resultLcd;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QStringLiteral("calculator"));
        calculator->resize(400, 300);
        centralWidget = new QWidget(calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        firstNumberLne = new QLineEdit(centralWidget);
        firstNumberLne->setObjectName(QStringLiteral("firstNumberLne"));
        firstNumberLne->setGeometry(QRect(180, 40, 111, 25));
        secondNumberLne = new QLineEdit(centralWidget);
        secondNumberLne->setObjectName(QStringLiteral("secondNumberLne"));
        secondNumberLne->setGeometry(QRect(180, 90, 113, 25));
        firstNumberLbl = new QLabel(centralWidget);
        firstNumberLbl->setObjectName(QStringLiteral("firstNumberLbl"));
        firstNumberLbl->setGeometry(QRect(70, 40, 101, 21));
        secondNumberLbl = new QLabel(centralWidget);
        secondNumberLbl->setObjectName(QStringLiteral("secondNumberLbl"));
        secondNumberLbl->setGeometry(QRect(50, 90, 111, 17));
        sumBtn = new QPushButton(centralWidget);
        sumBtn->setObjectName(QStringLiteral("sumBtn"));
        sumBtn->setGeometry(QRect(190, 140, 89, 25));
        resultLbl = new QLabel(centralWidget);
        resultLbl->setObjectName(QStringLiteral("resultLbl"));
        resultLbl->setGeometry(QRect(110, 180, 51, 17));
        resultLcd = new QLCDNumber(centralWidget);
        resultLcd->setObjectName(QStringLiteral("resultLcd"));
        resultLcd->setGeometry(QRect(200, 180, 64, 23));
        calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calculator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        calculator->setStatusBar(statusBar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "0", Q_NULLPTR));
        firstNumberLne->setInputMask(QString());
        firstNumberLne->setText(QString());
        firstNumberLbl->setText(QApplication::translate("calculator", "First Number:", Q_NULLPTR));
        secondNumberLbl->setText(QApplication::translate("calculator", "Second Number:", Q_NULLPTR));
        sumBtn->setText(QApplication::translate("calculator", "Sum", Q_NULLPTR));
        resultLbl->setText(QApplication::translate("calculator", "Result:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
