#include "frmlightbutton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    frmlightbutton w;
    w.setWindowTitle("高亮发光按钮");
    w.show();

    return a.exec();
}
