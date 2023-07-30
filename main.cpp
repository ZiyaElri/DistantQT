#include "DistantQTMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DistantQTMainWindow w;
    w.show();
    return a.exec();
}
