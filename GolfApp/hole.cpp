#include "hole.h"
#include "ui_hole.h"
#include "mainwindow.h"
#include "database.h"

hole::hole(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hole)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");

    QLabel *hole_number_label = new QLabel("Hole");
    ui->gridLayout->addWidget(hole_number_label,0,0);
    QLabel *hole_number = new QLabel("#XX");
    ui->gridLayout->addWidget(hole_number,1,0);

    QLabel *yardage_label = new QLabel("Yardage");
    ui->gridLayout->addWidget(yardage_label,0,1);
    QLabel *yardage = new QLabel("XXX Yards");
    ui->gridLayout->addWidget(yardage,1,1);

    QLabel *par_label = new QLabel("Par");
    ui->gridLayout->addWidget(par_label,0,2);
    QLabel *par = new QLabel("X");
    ui->gridLayout->addWidget(par,1,2);

    QLabel *front_yardage_label = new QLabel("Front:");
    ui->gridLayout->addWidget(front_yardage_label,2,0);
    QLabel *front_yardage = new QLabel("XXX Yards");
    ui->gridLayout->addWidget(front_yardage,3,0);

    QLabel *middle_yardage_label = new QLabel("Middle:");
    ui->gridLayout->addWidget(middle_yardage_label,2,1);
    QLabel *middle_yardage = new QLabel("XXX Yards");
    ui->gridLayout->addWidget(middle_yardage,3,1);

    QLabel *back_yardage_label = new QLabel("Back:");
    ui->gridLayout->addWidget(back_yardage_label,2,2);
    QLabel *back_yardage = new QLabel("XXX Yards");
    ui->gridLayout->addWidget(back_yardage,3,2);
}

hole::~hole()
{
    delete ui;
}

void hole::on_previousButton_clicked()
{

}

void hole::on_nextButton_clicked()
{

}

/*!
 * \brief hole::on_backButton_clicked
 *  This slot will implement the "previous" window access. Unfortunately, when the user
 *  clicks on this button, it will only close the current window and show the last
 *  window that was opened. The application might have problems with accesssing the database
 *  and storing queries when / where needed. Only time will tell.
 */
void hole::on_backButton_clicked()
{
    this->setHidden(true);
}
