#ifndef NEWSFEED_H
#define NEWSFEED_H

#include <QMainWindow>

namespace Ui {
class newsfeed;
}

class newsfeed : public QMainWindow
{
    Q_OBJECT

public:
    explicit newsfeed(QWidget *parent = 0);
    ~newsfeed();

private slots:

    void on_PGATour_clicked();

private:
    Ui::newsfeed *ui;
};

#endif // NEWSFEED_H
