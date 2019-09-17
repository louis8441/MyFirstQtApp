#include "QtShowImg.h"


void QtShowImg::clicked(){
	// show the QFileDialog after button on click
	// use m_fileName parameter to record last time dialog directory
	m_fileName = QFileDialog::getOpenFileName(0, "Open Image",
		m_fileName, "Image Files (*.png *.xpm *.jpg *.bmp) ");

	QPixmap pic(m_fileName); //show image

	//resize the window size by following the image size
	m_widget->resize(pic.width() +50 , pic.height() + 50);
	m_widget->setWindowTitle("image size high:" +
		QString::number(pic.height()) +
		"  ,  weight:" +
		QString::number(pic.width()));

	// use HTML tag to show the filename in label 
	//emit: emission the signal
	emit fileNameChanged("<center><h1><font color=blue>" +
		m_fileName +
		"</font></h1></center>");
	emit pixmapChanged(pic);
}
