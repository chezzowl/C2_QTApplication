#include "C2App.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	C2App w;
	w.show();
	return a.exec();
}
