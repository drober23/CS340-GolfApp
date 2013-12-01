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
 * Start-up window
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
    this->setWindowTitle("Golf App");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Profile_Button_clicked()
{
    QWidget *profile_window = new profile();
    profile_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

void MainWindow::on_Handicap_Button_clicked()
{
    QWidget *handicap_window = new handicap();
    handicap_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_NewsFeed_Button_clicked
 * This slot will give the user the option to connect to
 * three (3) different golf websites.
 */
void MainWindow::on_NewsFeed_Button_clicked()
{
    QWidget *newsfeed_window = new newsfeed();
    newsfeed_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

void MainWindow::on_Track_Button_clicked()
{
    QWidget *track_window = new track();
    track_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

void MainWindow::on_Rules_Button_clicked()
{
    QWidget *rules_window = new rules();
    rules_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

void MainWindow::on_Social_Button_clicked()
{
    QWidget *social_window = new social();
    social_window->show();
    // This will disappread the mainwindow
    this->isHidden();
}

/*!
 * \brief MainWindow::on_exitButton_clicked
 * Simply just our way to close/exit the Golf App.
 */
void MainWindow::on_exitButton_clicked()
{
    exit (EXIT_SUCCESS);
}
