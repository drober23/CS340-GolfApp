#ifndef VIEWRULES_H
#define VIEWRULES_H

#include <QMainWindow>

namespace Ui {
class viewRules;
}

class viewRules : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewRules(QWidget *parent = 0);
    ~viewRules();

private:
    Ui::viewRules *ui;
};

#endif // VIEWRULES_H
