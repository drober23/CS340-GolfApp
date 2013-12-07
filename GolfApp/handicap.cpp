#include "handicap.h"
#include "ui_handicap.h"
#include "mainwindow.h"

/*!
 * \brief handicap::handicap
 * \param parent
 *  The handicap window will show the current handicap index for each profile. Unfortunately,
 *  we were not able to record new scores with our stat-tracking feature and show the handicap
 *  history of each profile. If records indeed were entered the database, the code down below
 *  would be able to handle previous handicap indexes.
 */
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

    QLabel *current_handicap_label = new QLabel("Handicap");
    ui->gridLayout->addWidget(current_handicap_label,0,0);
    QLabel *current_handicap = new QLabel("#XX");
    ui->gridLayout->addWidget(current_handicap,0,1);

    QLabel *handicap_history_label = new QLabel("Handicap History");
    ui->gridLayout->addWidget(handicap_history_label,1,0);
    QLabel *handicap_history = new QLabel("#XX");
    ui->gridLayout->addWidget(handicap_history,1,1);

    QLabel *handicap_history_2 = new QLabel("#XX");
    ui->gridLayout->addWidget(handicap_history_2,2,1);

    QLabel *handicap_history_3 = new QLabel("#XX");
    ui->gridLayout->addWidget(handicap_history_3,3,1);

    QLabel *handicap_history_4 = new QLabel("#XX");
    ui->gridLayout->addWidget(handicap_history_4,4,1);

    QLabel *handicap_history_5 = new QLabel("#XX");
    ui->gridLayout->addWidget(handicap_history_5,5,1);
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
