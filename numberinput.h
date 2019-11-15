#ifndef NUMBERINPUT_H
#define NUMBERINPUT_H

#include <QDialog>

namespace Ui {
class NumberInput;
}

class NumberInput : public QDialog
{
    Q_OBJECT

public:
    explicit NumberInput(QWidget *parent = nullptr);
    ~NumberInput();

private:
    Ui::NumberInput *ui;
};

#endif // NUMBERINPUT_H
