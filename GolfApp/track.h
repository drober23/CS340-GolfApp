#ifndef TRACK_H
#define TRACK_H

#include <QMainWindow>

namespace Ui {
class track;
}

class track : public QMainWindow
{
    Q_OBJECT

public:
    explicit track(QWidget *parent = 0);
    ~track();

private slots:

    void on_confirmCourse_clicked();

    void on_confirmTeeBox_clicked();

    void on_StartRound_clicked();

private:
    Ui::track *ui;
};

#endif // TRACK_H
