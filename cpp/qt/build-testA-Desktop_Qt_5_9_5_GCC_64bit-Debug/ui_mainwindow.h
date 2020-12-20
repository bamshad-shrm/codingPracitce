/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *firstNumberLb;
    QLineEdit *firstNumberLnEd;
    QLabel *secondNumberLb;
    QLineEdit *secondNumberLnEd;
    QSpacerItem *verticalSpacer;
    QPushButton *addBtn;
    QLabel *label;
    QLabel *resultLb;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(278, 159);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        firstNumberLb = new QLabel(centralWidget);
        firstNumberLb->setObjectName(QStringLiteral("firstNumberLb"));

        gridLayout->addWidget(firstNumberLb, 0, 0, 1, 1);

        firstNumberLnEd = new QLineEdit(centralWidget);
        firstNumberLnEd->setObjectName(QStringLiteral("firstNumberLnEd"));

        gridLayout->addWidget(firstNumberLnEd, 0, 1, 1, 1);

        secondNumberLb = new QLabel(centralWidget);
        secondNumberLb->setObjectName(QStringLiteral("secondNumberLb"));

        gridLayout->addWidget(secondNumberLb, 1, 0, 1, 1);

        secondNumberLnEd = new QLineEdit(centralWidget);
        secondNumberLnEd->setObjectName(QStringLiteral("secondNumberLnEd"));

        gridLayout->addWidget(secondNumberLnEd, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        gridLayout->addWidget(addBtn, 2, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        resultLb = new QLabel(centralWidget);
        resultLb->setObjectName(QStringLiteral("resultLb"));
        resultLb->setFrameShape(QFrame::Box);
        resultLb->setLineWidth(3);

        gridLayout->addWidget(resultLb, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "testA", Q_NULLPTR));
        firstNumberLb->setText(QApplication::translate("MainWindow", "First Nuamber", Q_NULLPTR));
        secondNumberLb->setText(QApplication::translate("MainWindow", "Second Number", Q_NULLPTR));
        addBtn->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Results", Q_NULLPTR));
        resultLb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
