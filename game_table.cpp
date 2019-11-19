#include "game_table.h"
#include "ui_game_table.h"

game_table::game_table(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game_table)
{
    ui->setupUi(this);
}

game_table::~game_table()
{
    delete ui;
}
