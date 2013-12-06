#include <QApplication>
#include "mainwindow.h"
#include "login.h"
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
    //qDebug() << QSqlDatabase::drivers();
    //qDebug() << "Library Paths: " << QApplication::libraryPaths();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");;
    //qDebug() << db.isValid();
    db.setDatabaseName("/Users/got_romo/Desktop/golfapp.db");
    qDebug() << db.isValid();
    bool ok = db.open();
    qDebug() << ok << "" << db.tables() << endl;

    QSqlQuery query ("select * from CourseInfo");
    while (query.next()) {
        sql = query.value(1).toString();
        qDebug() << query.value(1).toString();
    }

    //MainWindow w;
    // Need to connect to the database first and keep open until we exit the application
    //database db;
    login w;
    w.showMaximized();

    return a.exec();
}
