#include "mainwindow.h"
#include <QApplication>
#include "source.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Source s;
    w.show();

    return a.exec();
}
