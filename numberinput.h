#ifndef NUMBERINPUT_H
#define NUMBERINPUT_H

#include <QDialog>

namespace Ui {
class NumberInput;
}

class NumberInput : public QDialog
{
    int number;
    Q_OBJECT

public:
   int get_number();
    explicit NumberInput(QWidget *parent = nullptr);
    ~NumberInput();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::NumberInput *ui;
};

#endif // NUMBERINPUT_H
