#include "viewrules.h"
#include "ui_viewrules.h"

viewRules::viewRules(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::viewRules)
{
    ui->setupUi(this);
}

viewRules::~viewRules()
{
    delete ui;
}
