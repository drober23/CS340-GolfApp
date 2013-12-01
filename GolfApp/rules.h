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

private:
    Ui::rules *ui;
};

#endif // RULES_H
