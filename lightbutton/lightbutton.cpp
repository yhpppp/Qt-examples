#include "lightbutton.h"
#include <QDebug>

LightButton::LightButton(QWidget *parent) : QWidget(parent)
{

}

void LightButton::paintEvent(QPaintEvent *)
{
    int width = this->width();
    int height = this->height();
    int side = qMin(width, height);

    //绘制准备工作,启用反锯齿,平移坐标轴中心,等比例缩放
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);


    painter.translate(width / 2, height / 2);
    painter.scale(side / 200.0, side / 200.0);


    //    drawBorderOut(&painter);

    //    drawBorderIn(&painter);

    drawBg(&painter);
    //绘制居中文字
    //    drawText(&painter);

    //    drawOverlay(&painter);
}

void LightButton::drawBorderOut(QPainter *painter)
{

}

void LightButton::drawBorderIn(QPainter *painter)
{

}

void LightButton::drawBg(QPainter *painter)
{
    int radius = 80;
    painter->save();
    painter->setPen(Qt::NoPen);
    painter->setBrush(bgColor);
    painter->drawEllipse(-radius,-radius,radius*2,radius*2);
    painter->restore();
}

void LightButton::setBgColor(const QColor &bgColor)
{
    if(this->bgColor != bgColor){
        this->bgColor = bgColor;
        this->update();
    }
}

void LightButton::setGreen()
{
    setBgColor(QColor(0,166,0));
}

void LightButton::setRed()
{
    setBgColor(QColor(255, 0, 0));
}

void LightButton::setYellow()
{
    setBgColor(QColor(238, 238, 0));
}
