#include "QtShowImg.h"
#include <QtWidgets/QApplication>
#include <QBitmap>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

//choose file and show image information in widget
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QtShowImg bc; //class of Singal and Slot
	window->setWindowTitle("Choose image and display");

	QLabel *labelText = new QLabel("Browse");
	QLabel *labelImage = new QLabel("");

	QPushButton *btn = new QPushButton("open file");

	QVBoxLayout *vBoxLayout = new QVBoxLayout;  //lines up widgets vertically
	window->setLayout(vBoxLayout);

	//add the widget into layout in sequence
	vBoxLayout->addWidget(btn);
	vBoxLayout->addWidget(labelText);
	vBoxLayout->addWidget(labelImage);

	bc.setWidget(window); //func: modify the window size and show the image title

	// receive the signal of btn->clicked() and sent a slot to bc.clicked() 
	QObject::connect(btn, SIGNAL(clicked()), &bc, SLOT(clicked()));

	// receive the signal of bc.fileNameChanged() and sent a slot to label.setText() 
	QObject::connect(&bc, SIGNAL(fileNameChanged(QString)),
		labelText, SLOT(setText(QString)));

	// receive the signal of bc.pixmapChanged() and sent a slot to labelImage.setPixmap() 
	QObject::connect(&bc, SIGNAL(pixmapChanged(QPixmap)),
		labelImage, SLOT(setPixmap(QPixmap)));

	window->show();
	
	return app.exec();
}
