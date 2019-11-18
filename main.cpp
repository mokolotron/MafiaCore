#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "./source/Core.h"
#include "./source/Score.h"
int Score::amount = 0;
int Score::mafia = 0;
int Score::pacefulls = 0;
int AbstractUnit :: CountUnits = 0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    a.exec();



return 0;
}
