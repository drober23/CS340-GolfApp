#include <QApplication>
#include "login.h"
#include "mainwindow.h"

/*!
 * \brief main
 *  Main.cpp will just start our application into the login.cpp window
 * \param argc
 * \param argv
 * \return
 *  CS 340 Semester Project
 *  All About Golf aka Virtual Golf Caddy
 *  Raul Luna, Chris Thomas, Diana Roberts
 *  Please note inorder to login into the app, please use one of the following:
 *  username: jluna8    password: golf123
 *  username: cthoma32  password: password
 *  username: drober23  password: girl555
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
