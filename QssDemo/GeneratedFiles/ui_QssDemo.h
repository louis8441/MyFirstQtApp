/********************************************************************************
** Form generated from reading UI file 'QssDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSSDEMO_H
#define UI_QSSDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QssDemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QssDemoClass)
    {
        if (QssDemoClass->objectName().isEmpty())
            QssDemoClass->setObjectName(QString::fromUtf8("QssDemoClass"));
        QssDemoClass->resize(600, 400);
        menuBar = new QMenuBar(QssDemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QssDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QssDemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QssDemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QssDemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QssDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QssDemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QssDemoClass->setStatusBar(statusBar);

        retranslateUi(QssDemoClass);

        QMetaObject::connectSlotsByName(QssDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QssDemoClass)
    {
        QssDemoClass->setWindowTitle(QApplication::translate("QssDemoClass", "QssDemo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QssDemoClass: public Ui_QssDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSSDEMO_H
