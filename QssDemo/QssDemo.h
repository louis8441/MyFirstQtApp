#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QssDemo.h"

class QssDemo : public QMainWindow
{
	Q_OBJECT

public:
	QssDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QssDemoClass ui;
};
