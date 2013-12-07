#include "profile.h"
#include "ui_profile.h"
#include "mainwindow.h"
QTextStream cin(stdin);
QTextStream cout(stdout);

/*!
 * \brief profile::profile
 * \param parent
 *  The profile window will show the following information of each profile:
 *  -#Name
 *  -#Contact Information
 *      - Email
 *      - Address
 *      - Handicap Index
 *      - Membership status
 *  -#What's in the bag aka current clubs using (14 altogether):
 *      - Driver
 *      - Fairway Woods
 *      - Hybrids
 *      - Irons
 *      - Wedges
 *      - Putter
 *  Unfortunately, we did not the implement "What's in the bag" feature in this
 *  window. No code also is not currently displayed in this file.
 */
profile::profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profile)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");

    QLabel *profile_label = new QLabel("Profile: ");
    ui->gridLayout->addWidget(profile_label,0,0);
    QLabel *profile_name = new QLabel("JUNIOR LUNA");
    ui->gridLayout->addWidget(profile_name,0,1);

    QLabel *email_label = new QLabel("Email: ");
    ui->gridLayout->addWidget(email_label,1,0);
    QLabel *email = new QLabel("juniorluna2@gmail.com");
    ui->gridLayout->addWidget(email,1,1);

    QLabel *address_label = new QLabel("Address: ");
    ui->gridLayout->addWidget(address_label,2,0);
    QLabel *address = new QLabel("123 Mysteria Lane\nChicago, IL 60603");
    ui->gridLayout->addWidget(address,2,1);

    QLabel *handicap_label = new QLabel("Handicap: ");
    ui->gridLayout->addWidget(handicap_label,3,0);
    QLabel *handicap = new QLabel("3.8");
    ui->gridLayout->addWidget(handicap,3,1);

    QLabel *membership_label = new QLabel("Membership Status: ");
    ui->gridLayout->addWidget(membership_label,4,0);
    QLabel *membership = new QLabel("Big Foot Country Club");
    ui->gridLayout->addWidget(membership,4,1);
}

profile::~profile()
{
    delete ui;
}

/*!
 * \brief profile::on_backButton_clicked
 *  This slot will implement the "previous" window access. Unfortunately, when the user
 *  clicks on this button, it will only close the current window and show the last
 *  window that was opened. The application might have problems with accesssing the database
 *  and storing queries when / where needed. Only time will tell.
 */
void profile::on_backButton_clicked()
{
    this->setHidden(true);
}
