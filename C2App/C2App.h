#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_C2App.h"

class C2App : public QMainWindow
{
	Q_OBJECT

public:
	C2App(QWidget *parent = Q_NULLPTR);

private:
	Ui::C2AppClass ui;
};
