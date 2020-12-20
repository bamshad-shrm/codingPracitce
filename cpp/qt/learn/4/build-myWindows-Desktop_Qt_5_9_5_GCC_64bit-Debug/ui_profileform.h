/********************************************************************************
** Form generated from reading UI file 'profileform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEFORM_H
#define UI_PROFILEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_profileForm
{
public:
    QLabel *label;

    void setupUi(QDialog *profileForm)
    {
        if (profileForm->objectName().isEmpty())
            profileForm->setObjectName(QStringLiteral("profileForm"));
        profileForm->resize(400, 300);
        label = new QLabel(profileForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 100, 181, 17));

        retranslateUi(profileForm);

        QMetaObject::connectSlotsByName(profileForm);
    } // setupUi

    void retranslateUi(QDialog *profileForm)
    {
        profileForm->setWindowTitle(QApplication::translate("profileForm", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("profileForm", "The profile form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class profileForm: public Ui_profileForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEFORM_H
