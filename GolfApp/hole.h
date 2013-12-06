#ifndef HOLE_H
#define HOLE_H

#include <QMainWindow>

namespace Ui {
class hole;
}

class hole : public QMainWindow
{
    Q_OBJECT

public:
    explicit hole(QWidget *parent = 0);
    ~hole();

private slots:

    void on_nextButton_clicked();

    void on_previousButton_clicked();

    void on_backButton_clicked();

private:
    Ui::hole *ui;
};

#endif // HOLE_H
