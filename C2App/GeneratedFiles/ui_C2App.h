/********************************************************************************
** Form generated from reading UI file 'C2App.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C2APP_H
#define UI_C2APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_C2AppClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *C2AppClass)
    {
        if (C2AppClass->objectName().isEmpty())
            C2AppClass->setObjectName(QString::fromUtf8("C2AppClass"));
        C2AppClass->resize(600, 400);
        centralWidget = new QWidget(C2AppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(215, 250, 91, 31));
        C2AppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(C2AppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        C2AppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(C2AppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        C2AppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(C2AppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        C2AppClass->setStatusBar(statusBar);

        retranslateUi(C2AppClass);

        QMetaObject::connectSlotsByName(C2AppClass);
    } // setupUi

    void retranslateUi(QMainWindow *C2AppClass)
    {
        C2AppClass->setWindowTitle(QApplication::translate("C2AppClass", "C2App", nullptr));
        pushButton->setText(QApplication::translate("C2AppClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class C2AppClass: public Ui_C2AppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C2APP_H
