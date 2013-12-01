#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QTextStream>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("Golf App");
}

login::~login()
{
    delete ui;
}

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

    QWidget *mainwindow = new MainWindow();
    mainwindow->show();
    // This will disappread the mainwindow
    this->isHidden();
}
