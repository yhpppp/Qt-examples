#include "frmlightbutton.h"
#include "ui_frmlightbutton.h"

frmlightbutton::frmlightbutton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmlightbutton)
{
    ui->setupUi(this);
}

frmlightbutton::~frmlightbutton()
{
    delete ui;
}
