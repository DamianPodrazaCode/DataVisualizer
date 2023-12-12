/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSerial;
    QAction *actionNetwork;
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionMacro1;
    QAction *actionMacro2;
    QAction *actionMacro3;
    QAction *actionMacro4;
    QAction *actionMacro5;
    QAction *actionMacro6;
    QAction *actionMacro7;
    QAction *actionMacro8;
    QAction *actionMacro9;
    QAction *actionMacro10;
    QAction *actionMacro;
    QAction *actionInfo;
    QAction *actionASCII_tab;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuNew_connect;
    QMenu *menuMacro;
    QMenu *menuHelp;
    QToolBar *toolBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(547, 319);
        actionSerial = new QAction(MainWindow);
        actionSerial->setObjectName("actionSerial");
        actionNetwork = new QAction(MainWindow);
        actionNetwork->setObjectName("actionNetwork");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionMacro1 = new QAction(MainWindow);
        actionMacro1->setObjectName("actionMacro1");
        actionMacro2 = new QAction(MainWindow);
        actionMacro2->setObjectName("actionMacro2");
        actionMacro3 = new QAction(MainWindow);
        actionMacro3->setObjectName("actionMacro3");
        actionMacro4 = new QAction(MainWindow);
        actionMacro4->setObjectName("actionMacro4");
        actionMacro5 = new QAction(MainWindow);
        actionMacro5->setObjectName("actionMacro5");
        actionMacro6 = new QAction(MainWindow);
        actionMacro6->setObjectName("actionMacro6");
        actionMacro7 = new QAction(MainWindow);
        actionMacro7->setObjectName("actionMacro7");
        actionMacro8 = new QAction(MainWindow);
        actionMacro8->setObjectName("actionMacro8");
        actionMacro9 = new QAction(MainWindow);
        actionMacro9->setObjectName("actionMacro9");
        actionMacro10 = new QAction(MainWindow);
        actionMacro10->setObjectName("actionMacro10");
        actionMacro = new QAction(MainWindow);
        actionMacro->setObjectName("actionMacro");
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName("actionInfo");
        actionASCII_tab = new QAction(MainWindow);
        actionASCII_tab->setObjectName("actionASCII_tab");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 547, 21));
        menuNew_connect = new QMenu(menubar);
        menuNew_connect->setObjectName("menuNew_connect");
        menuNew_connect->setToolTipsVisible(true);
        menuMacro = new QMenu(menubar);
        menuMacro->setObjectName("menuMacro");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setAutoFillBackground(false);
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew_connect->menuAction());
        menubar->addAction(menuMacro->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuNew_connect->addAction(actionOpen);
        menuNew_connect->addAction(actionSave);
        menuNew_connect->addSeparator();
        menuNew_connect->addAction(actionSerial);
        menuNew_connect->addAction(actionNetwork);
        menuNew_connect->addSeparator();
        menuNew_connect->addAction(actionExit);
        menuNew_connect->addSeparator();
        menuMacro->addAction(actionMacro1);
        menuMacro->addAction(actionMacro2);
        menuMacro->addAction(actionMacro3);
        menuMacro->addAction(actionMacro4);
        menuMacro->addAction(actionMacro5);
        menuMacro->addAction(actionMacro6);
        menuMacro->addAction(actionMacro7);
        menuMacro->addAction(actionMacro8);
        menuMacro->addAction(actionMacro9);
        menuMacro->addAction(actionMacro10);
        menuHelp->addAction(actionMacro);
        menuHelp->addAction(actionInfo);
        menuHelp->addAction(actionASCII_tab);
        toolBar->addAction(actionSerial);
        toolBar->addAction(actionNetwork);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSerial->setText(QCoreApplication::translate("MainWindow", "Serial", nullptr));
        actionNetwork->setText(QCoreApplication::translate("MainWindow", "Network", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open CFG", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save CFG", nullptr));
        actionMacro1->setText(QCoreApplication::translate("MainWindow", "Macro1", nullptr));
#if QT_CONFIG(tooltip)
        actionMacro1->setToolTip(QCoreApplication::translate("MainWindow", "Macro1", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionMacro1->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        actionMacro2->setText(QCoreApplication::translate("MainWindow", "Macro2", nullptr));
#if QT_CONFIG(tooltip)
        actionMacro2->setToolTip(QCoreApplication::translate("MainWindow", "Macro2", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMacro3->setText(QCoreApplication::translate("MainWindow", "Macro3", nullptr));
        actionMacro4->setText(QCoreApplication::translate("MainWindow", "Macro4", nullptr));
        actionMacro5->setText(QCoreApplication::translate("MainWindow", "Macro5", nullptr));
        actionMacro6->setText(QCoreApplication::translate("MainWindow", "Macro6", nullptr));
        actionMacro7->setText(QCoreApplication::translate("MainWindow", "Macro7", nullptr));
        actionMacro8->setText(QCoreApplication::translate("MainWindow", "Macro8", nullptr));
        actionMacro9->setText(QCoreApplication::translate("MainWindow", "Macro9", nullptr));
        actionMacro10->setText(QCoreApplication::translate("MainWindow", "Macro10", nullptr));
        actionMacro->setText(QCoreApplication::translate("MainWindow", "Macro", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        actionASCII_tab->setText(QCoreApplication::translate("MainWindow", "ASCII tab", nullptr));
        menuNew_connect->setTitle(QCoreApplication::translate("MainWindow", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        menuMacro->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        menuMacro->setTitle(QCoreApplication::translate("MainWindow", "Macro Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
#if QT_CONFIG(accessibility)
        statusbar->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
