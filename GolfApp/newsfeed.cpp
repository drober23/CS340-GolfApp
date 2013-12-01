#include "newsfeed.h"
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
    ui->webView->load(QUrl("http://mobile.pgatour.com/s/2746/Home?platform=webapp"));
}

void newsfeed::on_LPGATour_clicked()
{
    ui->webView->load(QUrl("http://m.lpga.com/s/10364/Home?platform=webapp&pType=home"));
}

void newsfeed::on_ESPN_clicked()
{
    ui->webView->load(QUrl("http://m.espn.go.com/golf/"));

}

void newsfeed::on_backButton_clicked()
{
    this->setHidden(true);
}
