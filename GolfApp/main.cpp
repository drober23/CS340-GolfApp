#include <QApplication>
#include "login.h"
#include "mainwindow.h"
#include "database.h"

/*!
 * \brief main
 *  Main.cpp will just start our application into the login.cpp window
 * \param argc
 * \param argv
 * \return
 */
int main(int argc, char *argv[])
{
    QString sql;

    QApplication a(argc, argv);

    // Starting in the login window for access to application
    login w;
    w.showMaximized();

    return a.exec();
}
