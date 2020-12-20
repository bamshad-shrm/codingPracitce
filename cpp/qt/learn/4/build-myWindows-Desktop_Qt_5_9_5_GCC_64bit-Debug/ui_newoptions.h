/********************************************************************************
** Form generated from reading UI file 'newoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWOPTIONS_H
#define UI_NEWOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newOptions
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *newOptions)
    {
        if (newOptions->objectName().isEmpty())
            newOptions->setObjectName(QStringLiteral("newOptions"));
        newOptions->resize(400, 300);
        pushButton = new QPushButton(newOptions);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 80, 89, 25));
        pushButton_2 = new QPushButton(newOptions);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 150, 89, 25));
        pushButton_3 = new QPushButton(newOptions);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 210, 89, 25));

        retranslateUi(newOptions);

        QMetaObject::connectSlotsByName(newOptions);
    } // setupUi

    void retranslateUi(QDialog *newOptions)
    {
        newOptions->setWindowTitle(QApplication::translate("newOptions", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("newOptions", "option 1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("newOptions", "option 2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("newOptions", "option 3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class newOptions: public Ui_newOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWOPTIONS_H
