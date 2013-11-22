#include "newsfeed.h"
#include "web.h"
#include "ui_newsfeed.h"

newsfeed::newsfeed(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newsfeed)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("Golf App");
}

newsfeed::~newsfeed()
{
    delete ui;
}

void newsfeed::on_PGATour_clicked()
{
    QWidget *webPage_window = new web();
    webPage_window->show();
    // This will disappread the newsfeed window
    hide();
}
