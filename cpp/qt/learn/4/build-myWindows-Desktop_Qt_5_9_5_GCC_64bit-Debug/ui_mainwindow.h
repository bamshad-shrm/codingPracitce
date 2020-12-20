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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_window;
    QAction *actionoptions;
    QAction *actionopen_the_profile_form;
    QAction *actionnewBtnWindow;
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuprofile;
    QMenu *menunewBtn;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew_window = new QAction(MainWindow);
        actionNew_window->setObjectName(QStringLiteral("actionNew_window"));
        actionoptions = new QAction(MainWindow);
        actionoptions->setObjectName(QStringLiteral("actionoptions"));
        actionopen_the_profile_form = new QAction(MainWindow);
        actionopen_the_profile_form->setObjectName(QStringLiteral("actionopen_the_profile_form"));
        actionnewBtnWindow = new QAction(MainWindow);
        actionnewBtnWindow->setObjectName(QStringLiteral("actionnewBtnWindow"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(120, 50, 211, 121));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuprofile = new QMenu(menuBar);
        menuprofile->setObjectName(QStringLiteral("menuprofile"));
        menunewBtn = new QMenu(menuBar);
        menunewBtn->setObjectName(QStringLiteral("menunewBtn"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuprofile->menuAction());
        menuBar->addAction(menunewBtn->menuAction());
        menuFile->addAction(actionNew_window);
        menuOptions->addAction(actionoptions);
        menuprofile->addAction(actionopen_the_profile_form);
        menunewBtn->addAction(actionnewBtnWindow);
        toolBar->addAction(actionNew_window);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew_window->setText(QApplication::translate("MainWindow", "New window", Q_NULLPTR));
        actionoptions->setText(QApplication::translate("MainWindow", "options", Q_NULLPTR));
        actionopen_the_profile_form->setText(QApplication::translate("MainWindow", "open the profile form", Q_NULLPTR));
        actionnewBtnWindow->setText(QApplication::translate("MainWindow", "newBtnWindow", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        menuprofile->setTitle(QApplication::translate("MainWindow", "profile", Q_NULLPTR));
        menunewBtn->setTitle(QApplication::translate("MainWindow", "newBtn", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
