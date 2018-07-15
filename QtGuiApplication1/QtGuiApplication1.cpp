#include "QtGuiApplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.exit, SIGNAL(clicked()),this,SLOT( on_pushbutton_exit_clicked()));
}
void QtGuiApplication1::on_pushbutton_exit_clicked()
{
	this->close();
}
