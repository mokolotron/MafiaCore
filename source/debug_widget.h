#ifndef DEBUG_WIDGET_H
#define DEBUG_WIDGET_H

#include <QDialog>
#include <string>
#include <QString>
namespace Ui {
class Debug_Widget;
}

class Debug_Widget : public QDialog
{
    Q_OBJECT

public:
    explicit Debug_Widget(QWidget *parent = nullptr);
    ~Debug_Widget();
    void set_text(QString s);
private:
    Ui::Debug_Widget *ui;

};

#endif // DEBUG_WIDGET_H
