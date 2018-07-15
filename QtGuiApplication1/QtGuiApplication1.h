#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);
public slots:
	void on_pushbutton_exit_clicked();


private:
	Ui::QtGuiApplication1Class ui;
};
