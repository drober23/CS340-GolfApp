#include "hole.h"
#include "ui_hole.h"

hole::hole(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hole)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("Golf App");

    QLabel *hole_number_label = new QLabel("Hole");
    ui->gridLayout->addWidget(hole_number_label,0,0);
    QLabel *hole_number = new QLabel("#");
    ui->gridLayout->addWidget(hole_number,0,1);

    QLabel *yardage_label = new QLabel("Yardage");
    ui->gridLayout->addWidget(yardage_label,1,0);
    QLabel *yardage = new QLabel(" Yards");
    ui->gridLayout->addWidget(yardage,1,1);

    QLabel *par_label = new QLabel("Par");
    ui->gridLayout->addWidget(par_label,2,0);
    QLabel *par = new QLabel("");
    ui->gridLayout->addWidget(par,2,1);
}

hole::~hole()
{
    delete ui;
}
