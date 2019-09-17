#pragma once

#include <QtWidgets/QWidget>
#include "ui_FirstQtApp.h"

class FirstQtApp : public QWidget
{
	Q_OBJECT

public:
	FirstQtApp(QWidget *parent = Q_NULLPTR);


private:
	Ui::FirstQtAppClass ui;
};
