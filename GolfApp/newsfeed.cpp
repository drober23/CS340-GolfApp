#include "newsfeed.h"
#include "ui_newsfeed.h"
#include "mainwindow.h"

/*!
 * \brief newsfeed::newsfeed
 * \param parent
 *  The application news feed feature give the user the option to stay current
 *  with leaderboards and current news in the golf world. With three options:
 *      -#pgatour.com (Men's Golf Tour)
 *      -#lpgatour.com (Women's Golf Tour)
 *      -#espn.go.com/golf (Unisex Golf News)
 *  they have the capability to stay up-to-date while on the course.
 */
newsfeed::newsfeed(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newsfeed)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");
}

newsfeed::~newsfeed()
{
    delete ui;
}

/*!
 * \brief newsfeed::on_PGATour_clicked
 *  This slot gives the user the access to pgatour.com address for any current news.
 *  Note that the web view is in mobile-platform view.
 */
void newsfeed::on_PGATour_clicked()
{
    ui->webView->load(QUrl("http://mobile.pgatour.com/s/2746/Home?platform=webapp"));
}

/*!
 * \brief newsfeed::on_LPGATour_clicked
 *  This slot gives the user the access to lpgatour.com address for any current news.
 *  Note that the web view is in mobile-platform view.
 */
void newsfeed::on_LPGATour_clicked()
{
    ui->webView->load(QUrl("http://m.lpga.com/s/10364/Home?platform=webapp&pType=home"));
}

/*!
 * \brief newsfeed::on_GolfChannel_clicked
 *  This slot gives the user the access to espn.go.com/golf address for any current news.
 *  Note that the web view is in mobile-platform view.
 */
void newsfeed::on_ESPN_clicked()
{
    ui->webView->load(QUrl("http://m.espn.go.com/golf/"));
}


/*!
 * \brief newsfeed::on_backButton_clicked
 *  This slot will implement the "previous" window access. Unfortunately, when the user
 *  clicks on this button, it will only close the current window and show the last
 *  window that was opened. The application might have problems with accesssing the database
 *  and storing queries when / where needed. Only time will tell.
 */
void newsfeed::on_backButton_clicked()
{
    this->setHidden(true);
}
