#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newsfeed.h"
#include "rules.h"
#include "track.h"
#include "profile.h"
#include "handicap.h"
#include "social.h"
#include "hole.h"

/*!
 * \brief MainWindow::MainWindow
 * \param parent
 *  The application MainWindow will display the six (6) different features:
 *  -#Profile
 *  -#Handicap
 *  -#News Feed
 *  -#Tracking Round
 *  -#Rules of the Game
 *  -#Social Connection
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{   
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*!
 * \brief MainWindow::on_Profile_Button_clicked
 *  This slot will give the user the option to connect to
 *  their profile page. The profile page will consist of:
 *  -#Name
 *  -#Contact Information
 *      - Email
 *      - Address
 *      - Number
 *      - Membership status
 *  -#What's in the bag aka current clubs using (14 altogether):
 *      - Driver
 *      - Fairway Woods
 *      - Hybrids
 *      - Irons
 *      - Wedges
 *      - Putter
 */
void MainWindow::on_Profile_Button_clicked()
{
    QWidget *profile_window = new profile();
    profile_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_Handicap_Button_clicked
 *  This slot will give the user the option to lookup their current
 *  handicap. A handicap is a numerical measure of a golfer's potential
 *  playing ability based on the tees played for a given course. In order
 *  to accomplish this, the application will need to execute a query into
 *  it's mysql database and lookup the user handicap history. Ideally, the
 *  application would recalculate the user's handicap every two weeks so when
 *  the user selects the handicap feature, a log of past handicap index will
 *  display.
 */
void MainWindow::on_Handicap_Button_clicked()
{
    QWidget *handicap_window = new handicap();
    handicap_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_NewsFeed_Button_clicked
 *  This slot will give the user the option to connect to three (3) different
 *  golf websites:
 *      -#pgatour.com (QPushButton)
 *      -#lpgatour.com (QPushButton)
 *      -#espn.go.com/golf (QPushButton)
 *  When the user selects which website to access, QWebView will display the selected website
 *  and display inside the QWebView box. While having the size constraints, we noticed that using
 *  a desktop-platform view was not ideal so instead of accessing each website with a desktop-platform
 *  addresses, we changed it to mobile-platform addresses which gives us a better view inside our
 *  constraint window view.
 */
void MainWindow::on_NewsFeed_Button_clicked()
{
    QWidget *newsfeed_window = new newsfeed();
    newsfeed_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_Track_Button_clicked
 *  This slot will give the user the option to keep track of their round while playing.
 *  This feature is probably our most important feature. When the user selects this option,
 *  they will encounter track.cpp which will consist the following:
 *      -#Selecting a preloaded course to play (QComboBox)
 *      -#Selecting a preloaded set of tee to play from (QComboBox)
 *      -#Select which to hole to start on #1 - #18 (QComboBox)
 *  After each condition is satisfy, the user has the option to either:
 *      -#Start their round (QPushButton)
 *      -#Return to previous window (QPushButton)
 *  If the user select option 1, hole.cpp window will display with the selected starting
 *  hole that the user selected in the previous window. From there, the user to allowed to
 *  display each hole with either:
 *      -#Next Hole (QPushButton)
 *      -#Previous Hole (QPushButton)
 *  Once the user enters their final score on their last hole, meaning that each hole was played,
 *  the application will display their following statistics from that round played:
 *      -#Fairways hit
 *      -#G.I.R. hit
 *      -#Up & Downs
 *      -#Putts
 */
void MainWindow::on_Track_Button_clicked()
{
    QWidget *track_window = new track();
    track_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_Rules_Button_clicked
 *  This slot will give the user access to the United States Golf Association (USGA) rules that
 *  is located on their website (http://www.usga.org/Rule-Books/Rules-of-Golf/Rule-01/). As before
 *  with the news feed option, instead of accessing the desktop-platform address, we choose to set
 *  this link to their mobile-platform address.
 */
void MainWindow::on_Rules_Button_clicked()
{
    QWidget *rules_window = new rules();
    rules_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_Social_Button_clicked
 *  This slot will give the user access to the application's database and execute an query / lookup
 *  of other members inside the database. When the user selects this option, social.cpp will ONLY
 *  display the query lookup profile name and handicap index. No personal inside will be display from
 *  this query.
 */
void MainWindow::on_Social_Button_clicked()
{
    QWidget *social_window = new social();
    social_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_exitButton_clicked
 *  Simply just our way to close/exit the Golf App.
 */
void MainWindow::on_exitButton_clicked()
{
    exit (EXIT_SUCCESS);
}
