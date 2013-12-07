#include "hole.h"
#include "ui_hole.h"
#include "mainwindow.h"
<<<<<<< HEAD
#include "database.h"
extern int CourseID;
extern int StartingHole;
=======
>>>>>>> fab21b1f8de329e2fa927e82805ee2e1beac1235

/*!
 * \brief hole::hole
 * \param parent
 *  The hole window will display information on that currrent hole that is
 *  being played on. As the next button or the previous button is clicked, the
 *  appropriate information will be refreshed with their current location. Please
 *  note the front, middle, and back yardage will only display the full yardage of
 *  that current hole. Ideally we would have liked to display their current real-time
 *  yardages to the center of the green from there current location on the course.
 */
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

    QSqlQuery query("select * from HoleInfo");

    if( query.next()) {
        /* Making sure we stay in the right unique courseID while needing
         * to display current hole information.
         */
        if(query.value(1) == CourseID) {
            QLabel *hole_number_label = new QLabel("Hole");
            ui->gridLayout->addWidget(hole_number_label,0,0);
            QLabel *hole_number = new QLabel(query.value(2).toString());
            ui->gridLayout->addWidget(hole_number,1,0);

            QLabel *yardage_label = new QLabel("Yardage");
            ui->gridLayout->addWidget(yardage_label,0,1);
            QLabel *yardage = new QLabel(query.value(4).toString());
            ui->gridLayout->addWidget(yardage,1,1);

            QLabel *par_label = new QLabel("Par");
            ui->gridLayout->addWidget(par_label,0,2);
            QLabel *par = new QLabel(query.value(3).toString());
            ui->gridLayout->addWidget(par,1,2);

            QLabel *handicap_label = new QLabel("Handicap");
            ui->gridLayout->addWidget(handicap_label,0,3);
            QLabel *handicap = new QLabel(query.value(5).toString());
            ui->gridLayout->addWidget(handicap,1,3);

            QLabel *front_yardage_label = new QLabel("Front:");
            ui->gridLayout->addWidget(front_yardage_label,2,0);
            QLabel *front_yardage = new QLabel(query.value(4).toString());
            ui->gridLayout->addWidget(front_yardage,3,0);

            QLabel *middle_yardage_label = new QLabel("Middle:");
            ui->gridLayout->addWidget(middle_yardage_label,2,1);
            QLabel *middle_yardage = new QLabel(query.value(4).toString());
            ui->gridLayout->addWidget(middle_yardage,3,1);

            QLabel *back_yardage_label = new QLabel("Back:");
            ui->gridLayout->addWidget(back_yardage_label,2,2);
            QLabel *back_yardage = new QLabel(query.value(4).toString());
            ui->gridLayout->addWidget(back_yardage,3,2);
        }
    }
}

hole::~hole()
{
    delete ui;
}

/*!
 * \brief hole::on_previousButton_clicked
 *  This slot was suppose to display the previous hole information.
 */
void hole::on_previousButton_clicked()
{

}

/*!
 * \brief hole::on_nextButton_clicked
 *  This slot was suppose to display the next hole information.
 */
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
