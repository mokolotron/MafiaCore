#include "numberinput.h"
#include "ui_numberinput.h"
#include "source/Statuses.h"

int NumberInput::get_policeN()
{
    return this->policeN;
}
int NumberInput::get_mafiaN()
{
    return this->mafiaN;
}
int NumberInput::get_pacefullN()
{
    return this->pacefullN;
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
  //  int number = ui->input->text().trimmed().toInt();
   // this->number = number;

   this->policeN = ui->input_1->text().trimmed().toInt();
   this->mafiaN = ui->input_2->text().trimmed().toInt();
   this->pacefullN = ui->input_3->text().trimmed().toInt();

}
