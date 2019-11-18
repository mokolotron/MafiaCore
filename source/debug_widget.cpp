#include "debug_widget.h"
#include "ui_debug_widget.h"


Debug_Widget::Debug_Widget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Debug_Widget)
{
    ui->setupUi(this);
}

Debug_Widget::~Debug_Widget()
{
    delete ui;
}

void Debug_Widget::set_text(QString s)
{
    ui->textBrowser->setText(s);
}
