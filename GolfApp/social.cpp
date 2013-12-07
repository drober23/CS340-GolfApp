#include "social.h"
#include "ui_social.h"
#include "mainwindow.h"
<<<<<<< HEAD
#include "database.h"
#include <cstring>

/*!
 * \brief social::social
 * \param parent
 *  The social window is able to search the database for current members with either
 *  their first name or last name. For some reason, lines 55-68 is suppose to handle
 *  the user query but will not display found records. I don't know if line 65 is
 *  somehow being misused but ideally again we would like the executed query to be able
 *  to return true when a member the user is looking for is currently in the database.
 */
=======

>>>>>>> fab21b1f8de329e2fa927e82805ee2e1beac1235
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
<<<<<<< HEAD
    qDebug() << lastName << endl;
    fullName = firstName + " " + lastName;
    qDebug() << fullName << " " << fullName.size() << endl;

    /*!
     * \brief query
     *  Searching for local members inside the application's database.
     */
    QSqlQuery query ("select * from Profile");
    while(query.next()) {
        /* Need to check user access to database with
         * username and corresponding password here
         */

        sql = query.value(4).toString();
        qDebug() << sql << sql.size();

        if( fullName == sql);
            ui->SearchBrowser->setText("Found");
    }
    // Error message
    ui->SearchBrowser->setText("No Records Found");
=======
    cout << lastName << endl;
>>>>>>> fab21b1f8de329e2fa927e82805ee2e1beac1235
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
