#include "social.h"
#include "ui_social.h"
#include "mainwindow.h"

social::social(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::social)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");
}

social::~social()
{
    delete ui;
}

/*!
 * \brief social::on_SearchButton_clicked
 */
void social::on_SearchButton_clicked()
{
    QTextStream cin(stdin);
    QTextStream cout(stdout);
    QString firstName;
    QString lastName;

    /*! Query to search app's members in database
     *  for displaying certain profile information
     */
    firstName = ui->FirstNameSearch->text();
    cout << firstName << endl;
    lastName = ui->LastNameSearch->text();
    cout << lastName << endl;
}

/*!
 * \brief social::on_backButton_clicked
 *  This slot will implement the "previous" window access. Unfortunately, when the user
 *  clicks on this button, it will only close the current window and show the last
 *  window that was opened. The application might have problems with accesssing the database
 *  and storing queries when / where needed. Only time will tell.
 */
void social::on_backButton_clicked()
{
    this->setHidden(true);
}
