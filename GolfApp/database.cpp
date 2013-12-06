#include "database.h"
#include "mainwindow.h"

database::database()
{
    QString sql;

    //qDebug() << QSqlDatabase::drivers();
    //qDebug() << "Library Paths: " << QApplication::libraryPaths();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //qDebug() << db.isValid();
    db.setDatabaseName("/Users/got_romo/Desktop/test.db");
    //qDebug() << db.isValid();
    bool ok = db.open();
    qDebug() << ok << "" << db.tables() << endl;

    QSqlQuery query ("select * from t1");
    while (query.next()) {
        sql = query.value(1).toString();
        qDebug() << query.value(1).toString();
    }
}
