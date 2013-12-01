#include "social.h"
#include "ui_social.h"
#include <QTextStream>

social::social(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::social)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("Golf App");
}

social::~social()
{
    delete ui;
}

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

void social::on_backButton_clicked()
{
    this->setHidden(true);
}
