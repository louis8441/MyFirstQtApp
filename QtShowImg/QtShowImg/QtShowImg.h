#pragma once

#include <QtWidgets/QMainWindow>
#include <QObject>
#include <QString>
#include <QFileDialog>
#include "ui_QtShowImg.h"


class QtShowImg : public QMainWindow
{
	Q_OBJECT

public:
	//QtShowImg(QWidget *parent = Q_NULLPTR);
	QtShowImg() :m_fileName(""), m_widget(NULL) {}

public slots:
	void clicked();
	void setWidget(QWidget *widget) { m_widget = widget; }

signals:
	void fileNameChanged(QString fileName); // receive filename 
	void pixmapChanged(QPixmap pic); // receive a new image 

private:
	Ui::QtShowImgClass ui;
	QString m_fileName;
	QWidget *m_widget;

};

