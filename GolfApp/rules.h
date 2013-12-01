#ifndef RULES_H
#define RULES_H

#include <QMainWindow>

namespace Ui {
class rules;
}

class rules : public QMainWindow
{
    Q_OBJECT

public:
    explicit rules(QWidget *parent = 0);
    ~rules();

private slots:

    void on_backButton_clicked();

private:
    Ui::rules *ui;
};

#endif // RULES_H
