#include "C2App.h"
#include <QtWidgets/QApplication>
#include <stdio.h>
#include <iostream>
#include <qtextstream.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	C2App w;
	w.show();
	std::cout << "HOLA!" << std::endl;
	//QTextStream(stdout) << "string to print" << endl;
	QTextStream out(stdout);
	QString x("Hola");
	out << x << endl;
	//foreach(QString x, strings)
		//out << x << endl;
	return a.exec();
	
	//std::cout << "HOLA!" << std::endl;
}
