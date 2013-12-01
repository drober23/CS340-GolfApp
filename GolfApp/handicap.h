#ifndef HANDICAP_H
#define HANDICAP_H

#include <QMainWindow>

namespace Ui {
class handicap;
}

class handicap : public QMainWindow
{
    Q_OBJECT

public:
    explicit handicap(QWidget *parent = 0);
    ~handicap();

private slots:

    void on_backButton_clicked();

private:
    Ui::handicap *ui;
};

#endif // HANDICAP_H
