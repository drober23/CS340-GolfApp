#include "rules.h"
#include "ui_rules.h"
#include "mainwindow.h"

/*!
 * \brief rules::rules
 * \param parent
 *  The rules.cpp will display a window with the USGA.org mobile-platform website.
 *  Initially, we would have like to access a file in the database to view rules when needed
 *  but instead, we opted to go with their (USGA) rules website.
 */
rules::rules(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rules)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    ui->webView->load(QUrl("http://m.usga.org/mt/www.usga.org/Rules.aspx?id=7788"));
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");
}

rules::~rules()
{
    delete ui;
}

/*!
 * \brief rules::on_backButton_clicked
 *  This slot will implement the "previous" window access. Unfortunately, when the user
 *  clicks on this button, it will only close the current window and show the last
 *  window that was opened. The application might have problems with accesssing the database
 *  and storing queries when / where needed. Only time will tell.
 */
void rules::on_backButton_clicked()
{
    this->setHidden(true);
}
