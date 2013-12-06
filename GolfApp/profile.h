#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class profile;
}

class profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit profile(QWidget *parent = 0);
    ~profile();

private slots:

    void on_backButton_clicked();

private:
    Ui::profile *ui;
};

#endif // PROFILE_H
