#include "mainwindow.h"

#include <QApplication>

#include <QLabel>

#include <QResource>
int main(int argc, char *argv[])
{
    QResource::registerResource("resource.rcc");
    QApplication a(argc, argv);
    QIcon icon(":/icon.ico");
    a.setWindowIcon(icon);
    MainWindow w;
    w.show();

    return a.exec();
}
