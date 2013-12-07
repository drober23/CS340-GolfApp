#include "handicap.h"
#include "ui_handicap.h"
#include "mainwindow.h"
#include "database.h"
extern int UserID;

handicap::handicap(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::handicap)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");

    QSqlQuery query("select * from Profile");
    while(query.next()) {
        int userMatch = query.value(1).toInt();
        //qDebug() << query.value(0).toInt();

        if( UserID == userMatch) {
            // Filling in Handicap Information starting from most recent handicap index
            QLabel *current_handicap_label = new QLabel("Handicap");
            ui->gridLayout->addWidget(current_handicap_label,0,0);
            QLabel *current_handicap = new QLabel(query.value(9).toString());
            ui->gridLayout->addWidget(current_handicap,0,1);

            QLabel *handicap_history_label = new QLabel("Handicap History");
            ui->gridLayout->addWidget(handicap_history_label,1,0);
            QLabel *handicap_history = new QLabel(query.value(9).toString());
            ui->gridLayout->addWidget(handicap_history,1,1);

            QLabel *handicap_history_2 = new QLabel(query.value(9).toString());
            ui->gridLayout->addWidget(handicap_history_2,2,1);

            QLabel *handicap_history_3 = new QLabel(query.value(9).toString());
            ui->gridLayout->addWidget(handicap_history_3,3,1);

            QLabel *handicap_history_4 = new QLabel(query.value(9).toString());
            ui->gridLayout->addWidget(handicap_history_4,4,1);

            QLabel *handicap_history_5 = new QLabel(query.value(9).toString());
            ui->gridLayout->addWidget(handicap_history_5,5,1);
        }
    }
}

handicap::~handicap()
{
    delete ui;
}

/*!
 * \brief handicap::on_backButton_clicked
 *  This slot will implement the "previous" window access. Unfortunately, when the user
 *  clicks on this button, it will only close the current window and show the last
 *  window that was opened. The application might have problems with accesssing the database
 *  and storing queries when / where needed. Only time will tell.
 */
void handicap::on_backButton_clicked()
{
    this->setHidden(true);
}
