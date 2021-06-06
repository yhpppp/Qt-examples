#include "frmlightbutton.h"
#include "ui_frmlightbutton.h"
#include <QTimer>

frmlightbutton::frmlightbutton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmlightbutton)
{
    ui->setupUi(this);

    qDebug("test");
    this->initForm();
}

frmlightbutton::~frmlightbutton()
{
    delete ui;
}

void frmlightbutton::initForm()
{
    //   ui->lightbutton2->setBgColor(QColor(255,107,107));
    //   ui->lightbutton3->setBgColor(QColor(24,189,155));

    type = 0;

    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateValue()));
    timer->start();
    updateValue();
}

void frmlightbutton::updateValue()
{
    if(type == 0){
        ui->lightbutton1->setRed();
        ui->lightbutton2->setGreen();
        ui->lightbutton3->setYellow();
        type = 1;
    } else if (type == 1){
        ui->lightbutton1->setGreen();
        ui->lightbutton2->setYellow();
        ui->lightbutton3->setRed();
        type = 2;
    } else if(type == 2){
        ui->lightbutton1->setYellow();
        ui->lightbutton2->setRed();
        ui->lightbutton3->setGreen();
        type = 0;
    }
}
