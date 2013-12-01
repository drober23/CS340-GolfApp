#include "profile.h"
#include "ui_profile.h"

profile::profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profile)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("Golf App");
}

profile::~profile()
{
    delete ui;
}
