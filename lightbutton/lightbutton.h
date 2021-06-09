#ifndef LIGHTBUTTON_H
#define LIGHTBUTTON_H

#include <QWidget>
#include <QPainter>
class LightButton : public QWidget
{
    Q_OBJECT
public:
    explicit LightButton(QWidget *parent = nullptr);

private:
    QColor bgColor; // 背景颜色
    QColor borderOutColorStart; //外边框渐变开始颜色
    QColor borderOutColorEnd;   //外边框渐变结束颜色
protected:
       void paintEvent(QPaintEvent *);
        void drawBorderOut(QPainter *painter); // 绘制外边框
        void drawBorderIn(QPainter *painter);
        void drawBg(QPainter *painter); // 绘制内部颜色
        void drawOverlay(QPainter *painter);
signals:

public slots:
    // 设置背景颜色
    void setBgColor(const QColor &bgColor);

    // 设置为绿色
    void setGreen();
    // 设置为红色
    void setRed();
    // 设置为黄色
    void setYellow();
};

#endif // LIGHTBUTTON_H
