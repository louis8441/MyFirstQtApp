#include "FirstQtApp.h"
#include <QtWidgets/QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLabel*label = new QLabel("Hello iphone 11 pro");
	label->setWindowTitle("First Qt yaa");
	label->resize(250, 80);
	label->show();

	//FirstQtApp w;
	//w.show();
	return a.exec();
}
