#include "FirstQtApp.h"
#include <QtWidgets/QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FirstQtApp w;

	QLabel*label = new QLabel("I'm a label~~");
	label->setWindowTitle("First Qt for showing label");
	label->resize(500, 500);
	label->show();

	//w.show();
	//return a.exec();
}
