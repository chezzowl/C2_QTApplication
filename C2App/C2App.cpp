#include "C2App.h"
#include <stdio.h>
#include <iostream>

C2App::C2App(QWidget *parent)
	: QWidget(parent)
{
	//ui->setupUi(this);
}

void C2App::setupSlots()
{
	/*connect(this->ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushbutton_clicked()));
	this->ui->pushButton;*/
}

void C2App::on_pushbutton_clicked()
{
	std::cout << "HOLA" << std::endl;
}
