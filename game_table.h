#ifndef GAME_TABLE_H
#define GAME_TABLE_H

#include <QMainWindow>

namespace Ui {
class game_table;
}

class game_table : public QMainWindow
{
    Q_OBJECT

public:
    explicit game_table(QWidget *parent = nullptr);
    ~game_table();

private:
    Ui::game_table *ui;
};

#endif // GAME_TABLE_H
