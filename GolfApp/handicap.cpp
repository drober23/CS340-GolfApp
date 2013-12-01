#include "handicap.h"
#include "ui_handicap.h"

handicap::handicap(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::handicap)
{
    ui->setupUi(this);
}

handicap::~handicap()
{
    delete ui;
}
