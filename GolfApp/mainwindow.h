#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_exitButton_clicked();

    void on_NewsFeed_Button_clicked();

    void on_Rules_Button_clicked();

    void on_Track_Button_clicked();

    void on_Handicap_Button_clicked();

    void on_Social_Button_clicked();

    void on_Profile_Button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
