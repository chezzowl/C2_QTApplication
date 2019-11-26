#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_C2App.h"

class C2App : public QWidget
{
	Q_OBJECT

public:
	C2App(QWidget *parent = Q_NULLPTR);
	

private:
	Ui::C2AppClass *ui;
	//~C2App() { delete ui; }
	void setupSlots();

protected slots:
	void on_pushbutton_clicked();
};
