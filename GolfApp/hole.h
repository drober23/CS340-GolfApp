#ifndef HOLE_H
#define HOLE_H

#include <QMainWindow>
#include <QLabel>
namespace Ui {
class hole;
}

class hole : public QMainWindow
{
    Q_OBJECT

public:
    explicit hole(QWidget *parent = 0);
    ~hole();

private:
    Ui::hole *ui;
};

#endif // HOLE_H
