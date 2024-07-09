#include "imagesigner.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageSigner w;
	w.show();
	return a.exec();
}
