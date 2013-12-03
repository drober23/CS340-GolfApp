/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *exitButton;
    QPushButton *Profile_Button;
    QPushButton *Handicap_Button;
    QPushButton *NewsFeed_Button;
    QPushButton *Track_Button;
    QPushButton *Rules_Button;
    QPushButton *Social_Button;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(350, 450);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(100, 400, 150, 25));
        Profile_Button = new QPushButton(centralWidget);
        Profile_Button->setObjectName(QStringLiteral("Profile_Button"));
        Profile_Button->setGeometry(QRect(20, 20, 150, 50));
        Profile_Button->setAutoFillBackground(false);
        Profile_Button->setStyleSheet(QStringLiteral(""));
        Handicap_Button = new QPushButton(centralWidget);
        Handicap_Button->setObjectName(QStringLiteral("Handicap_Button"));
        Handicap_Button->setGeometry(QRect(20, 80, 150, 50));
        NewsFeed_Button = new QPushButton(centralWidget);
        NewsFeed_Button->setObjectName(QStringLiteral("NewsFeed_Button"));
        NewsFeed_Button->setGeometry(QRect(20, 140, 150, 50));
        Track_Button = new QPushButton(centralWidget);
        Track_Button->setObjectName(QStringLiteral("Track_Button"));
        Track_Button->setGeometry(QRect(20, 200, 150, 50));
        Rules_Button = new QPushButton(centralWidget);
        Rules_Button->setObjectName(QStringLiteral("Rules_Button"));
        Rules_Button->setGeometry(QRect(20, 260, 150, 50));
        Social_Button = new QPushButton(centralWidget);
        Social_Button->setObjectName(QStringLiteral("Social_Button"));
        Social_Button->setGeometry(QRect(20, 320, 150, 50));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 350, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GolfApp", 0));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", 0));
        Profile_Button->setText(QApplication::translate("MainWindow", "Profile", 0));
        Handicap_Button->setText(QApplication::translate("MainWindow", "Handicap", 0));
        NewsFeed_Button->setText(QApplication::translate("MainWindow", "News Feed", 0));
        Track_Button->setText(QApplication::translate("MainWindow", "Tracking Round", 0));
        Rules_Button->setText(QApplication::translate("MainWindow", "Rules of the Game", 0));
        Social_Button->setText(QApplication::translate("MainWindow", "Social Connection", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
