#include "track.h"
#include "ui_track.h"
#include "hole.h"
#include "mainwindow.h"
#define NumofHoles 18

track::track(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::track)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("ALL ABOUT GOLF");

    ui->courseBox->addItem(tr("Bridges of Poplar Creek Country Club"));
    ui->courseBox->addItem(tr("Oak Grove Golf Course"));
    ui->courseBox->addItem(tr("Plum Tree National Golf Club"));
}

track::~track()
{
    delete ui;
}

void track::on_confirmCourse_clicked()
{
    QTextStream cin(stdin);
    QTextStream cout(stdout);
    QString courseSelected;

    courseSelected = ui->courseBox->currentText();
    cout << courseSelected << endl;

    if(courseSelected == "Bridges of Poplar Creek Country Club") {
        ui->teeBox->addItem(tr("Black: 71.2 / 136"));
        ui->teeBox->addItem(tr("Bridges: 70.3 / 134"));
        ui->teeBox->addItem(tr("Gold: 69.3 / 132"));
        ui->teeBox->addItem(tr("Silver: 66.7 / 126"));
        ui->teeBox->addItem(tr("Green: 63.5 / 118"));
        ui->teeBox->addItem(tr("Women-Green: 67.6 / 124"));
        ui->teeBox->addItem(tr("Women-Silver: 71.5 / 133"));
    }
    else if(courseSelected == "Oak Grove Golf Course") {
        ui->teeBox->addItem(tr("Professional: 75.0 / 142"));
        ui->teeBox->addItem(tr("Championship: 73.1 / 138"));
        ui->teeBox->addItem(tr("Tournament: 71.1 / 133"));
        ui->teeBox->addItem(tr("Yellow: 68.7 / 127"));
        ui->teeBox->addItem(tr("Yellow/Ladies: 74.0 / 133"));
        ui->teeBox->addItem(tr("Forward: 71.3 / 127"));
    }
    else if(courseSelected == "Plum Tree National Golf Club") {
        ui->teeBox->addItem(tr("Blue: 72.6 / 133"));
        ui->teeBox->addItem(tr("White: 71.3 / 130"));
        ui->teeBox->addItem(tr("Gold: 69.6 / 126"));
        ui->teeBox->addItem(tr("Red: 73.0 / 129"));
    }
}

void track::on_confirmTeeBox_clicked()
{
    QTextStream cin(stdin);
    QTextStream cout(stdout);
    QString teeSelected;

    teeSelected = ui->teeBox->currentText();
    cout << teeSelected << endl;

    for(int i=1; i < NumofHoles+1; i++)
    {
        ui->startHoleBox->addItem(QString::number(i));
    }
}

void track::on_StartRound_clicked()
{
    QTextStream cin(stdin);
    QTextStream cout(stdout);
    QString holeSelected;
    int startingHole = 0;

    holeSelected = ui->startHoleBox->currentText();
    startingHole = holeSelected.toInt();
    cout << startingHole << endl;

    QWidget *hole_window = new hole();
    hole_window->show();
    // This will disappread the mainwindow
    hide();
}

/*!
 * \brief track::on_backButton_clicked
 *  This slot will implement the "previous" window access. Unfortunately, when the user
 *  clicks on this button, it will only close the current window and show the last
 *  window that was opened. The application might have problems with accesssing the database
 *  and storing queries when / where needed. Only time will tell.
 */
void track::on_backButton_clicked()
{
    this->setHidden(true);
}
