/********************************************************************************
** Form generated from reading UI file 'QtShowImg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSHOWIMG_H
#define UI_QTSHOWIMG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtShowImgClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtShowImgClass)
    {
        if (QtShowImgClass->objectName().isEmpty())
            QtShowImgClass->setObjectName(QString::fromUtf8("QtShowImgClass"));
        QtShowImgClass->resize(600, 400);
        menuBar = new QMenuBar(QtShowImgClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtShowImgClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtShowImgClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtShowImgClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtShowImgClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtShowImgClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtShowImgClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtShowImgClass->setStatusBar(statusBar);

        retranslateUi(QtShowImgClass);

        QMetaObject::connectSlotsByName(QtShowImgClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtShowImgClass)
    {
        QtShowImgClass->setWindowTitle(QApplication::translate("QtShowImgClass", "QtShowImg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtShowImgClass: public Ui_QtShowImgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSHOWIMG_H
