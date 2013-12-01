#ifndef SOCIAL_H
#define SOCIAL_H

#include <QMainWindow>

namespace Ui {
class social;
}

class social : public QMainWindow
{
    Q_OBJECT

public:
    explicit social(QWidget *parent = 0);
    ~social();

private slots:

    void on_SearchButton_clicked();

    void on_backButton_clicked();

private:
    Ui::social *ui;
};

#endif // SOCIAL_H
