/********************************************************************************
** Form generated from reading UI file 'FirstQtApp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTQTAPP_H
#define UI_FIRSTQTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstQtAppClass
{
public:
    QPushButton *pushButton;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *FirstQtAppClass)
    {
        if (FirstQtAppClass->objectName().isEmpty())
            FirstQtAppClass->setObjectName(QString::fromUtf8("FirstQtAppClass"));
        FirstQtAppClass->resize(600, 400);
        pushButton = new QPushButton(FirstQtAppClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 320, 91, 31));
        graphicsView = new QGraphicsView(FirstQtAppClass);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(170, 50, 256, 256));
        graphicsView->setFrameShape(QFrame::StyledPanel);
        graphicsView->setFrameShadow(QFrame::Sunken);

        retranslateUi(FirstQtAppClass);

        QMetaObject::connectSlotsByName(FirstQtAppClass);
    } // setupUi

    void retranslateUi(QWidget *FirstQtAppClass)
    {
        FirstQtAppClass->setWindowTitle(QApplication::translate("FirstQtAppClass", "FirstQtApp", nullptr));
        pushButton->setText(QApplication::translate("FirstQtAppClass", "ha ha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstQtAppClass: public Ui_FirstQtAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTQTAPP_H
