#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <source/Core.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::display()
{
    //delete button
    ui->pushButton->setAttribute(Qt::WA_DeleteOnClose);
    ui->pushButton->close();


}


void MainWindow::on_pushButton_clicked()
{
    Core * core = new Core;
        core->start();
//    try {

//    } catch (exception) {

//    }



}
