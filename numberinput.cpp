#include "numberinput.h"
#include "ui_numberinput.h"

NumberInput::NumberInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumberInput)
{
    ui->setupUi(this);
}

NumberInput::~NumberInput()
{
    delete ui;
}
