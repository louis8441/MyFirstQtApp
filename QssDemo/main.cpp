#include "QssDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QssDemo w;
	w.show();
	return a.exec();
}
