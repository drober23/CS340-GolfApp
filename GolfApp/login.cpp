#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

/*!
 * \brief login::login
 * \param parent
 *  Our Login window will be our starting window for our application.
 *  The usernameLine and password line (QLineEdit Widgets) will handle
 *  the username query along with it's corresponding credentials inorder
 *  to access the application's database.
 */
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    /*!
     * \brief width
     * \brief height
     *  width = 350 is the consistent width of each window
     *  height = 450 is the consistent height of each window
     *  Each window will have these constraints inorder to give the illusion of a mobile application
     */
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");
}

login::~login()
{
    delete ui;
}

/*!
 * \brief login::on_loginButton_clicked
 *  Once a user enter their username and corresponding password,
 *  this QPushButton will either:
 *      a) Allow access to database with valid username along with
 *          corresponding password.
 *      b) Deny access to database with an invalid username or
 *          incorrect corresponding password to username.
 */
void login::on_loginButton_clicked()
{
    QTextStream cin(stdin);
    QTextStream cout(stdout);
    QString username;
    QString password;

    /*! Query to search app's members in database
     *  for displaying certain profile information
     */
    username = ui->usernameLine->text();
    cout << username << endl;
    password = ui->passwordLine->text();
    cout << password << endl;

    /* Need to check user access to database with
     * username and corresponding password here
     */
    QWidget *mainwindow = new MainWindow();
    mainwindow->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief login::on_exitButton_clicked
 *  Simply just our way to close/exit the Golf App.
 */
void login::on_exitButton_clicked()
{
    exit (EXIT_SUCCESS);
}
