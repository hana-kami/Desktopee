#include "widget.h"

#include <QApplication>
#include "loadqss.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadFileQss::setStyle(":/Gooseqss.qss");
    Widget w;
    w.show();
    return a.exec();
}
