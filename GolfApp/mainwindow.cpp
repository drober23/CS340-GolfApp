#include "mainwindow.h"
#include "newsfeed.h"
#include "ui_mainwindow.h"

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
    hide();
}

/*!
 * \brief MainWindow::on_exitButton_clicked
 * Simply just our way to close/exit the Golf App.
 */
void MainWindow::on_exitButton_clicked()
{
    exit (EXIT_SUCCESS);
}