#ifndef IMAGESIGNER_H
#define IMAGESIGNER_H

#include <QtWidgets/QMainWindow>
#include "ui_imagesigner.h"
#include <QtWidgets/QFileDialog>
#include <QDir>
#include <QPainter>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/Qwidget.h>
#include "Pt_FFT.h"
#include "ui_About.h"


class ProAbout:public QWidget
{
	Q_OBJECT
public:
	ProAbout(QWidget *parent = 0, Qt::WindowFlags f = 0)
	{
		ui.setupUi(this);
	}
protected:
private:
	Ui::Form_About ui;
};


class ImageSigner : public QMainWindow
{
	Q_OBJECT

public:
	ImageSigner(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~ImageSigner();
	void SignImage();
	void DisplaySourceImage();
	void DisplaySignImage();
public slots:
	void SLOT_LoadResPixmap();
	void SLOT_LoadSigPixmap();
	void SLOT_DoSign();
	void SLOT_SaveTo();
	void SLOT_About();
private:
	QPixmap m_Signmap;
	QPixmap m_Resmap;
	QPixmap m_SignedMap;
	ProAbout *about;
	Ui::ImageSignerClass ui;
};

#endif // IMAGESIGNER_H
