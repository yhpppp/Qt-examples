#ifndef FRMLIGHTBUTTON_H
#define FRMLIGHTBUTTON_H

#include <QWidget>

namespace Ui {
class frmlightbutton;
}

class frmlightbutton : public QWidget
{
    Q_OBJECT

public:
    explicit frmlightbutton(QWidget *parent = 0);
    ~frmlightbutton();

private:
    Ui::frmlightbutton *ui;
};

#endif // FRMLIGHTBUTTON_H
