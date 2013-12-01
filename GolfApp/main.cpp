#include <QApplication>
#include "mainwindow.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    login w;
    w.showMaximized();

    return a.exec();
}
