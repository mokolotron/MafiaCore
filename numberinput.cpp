#include "numberinput.h"
#include "ui_numberinput.h"

int NumberInput::get_number()
{
    return number;
}

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

void NumberInput::on_buttonBox_accepted()
{
    int number = ui->input->text().trimmed().toInt();
    this->number = number;

}
