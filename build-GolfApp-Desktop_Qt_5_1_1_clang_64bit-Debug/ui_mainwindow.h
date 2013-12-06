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
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(35, 240, 49, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(90, 390, 150, 25));
        exitButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 0, 0);\n"
"border-bottom-color: rgb(255, 0, 0);\n"
"border-right-color: rgb(255, 0, 0);\n"
"border-top-color: rgb(255, 0, 0);\n"
"border-color: rgb(255, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 94);\n"
"background-color: rgb(0, 0, 106);\n"
"font: 12pt \"Comic Sans MS\";"));
        Profile_Button = new QPushButton(centralWidget);
        Profile_Button->setObjectName(QStringLiteral("Profile_Button"));
        Profile_Button->setGeometry(QRect(90, 20, 150, 50));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(0, 0, 106, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(85, 0, 127, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(85, 85, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(255, 0, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(0, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush10(QColor(69, 148, 143, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush11(QColor(0, 170, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush11);
        QBrush brush12(QColor(0, 0, 94, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        Profile_Button->setPalette(palette1);
        Profile_Button->setAutoFillBackground(false);
        Profile_Button->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 0, 0);\n"
"border-bottom-color: rgb(255, 0, 0);\n"
"border-right-color: rgb(255, 0, 0);\n"
"border-top-color: rgb(255, 0, 0);\n"
"border-color: rgb(255, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 94);\n"
"background-color: rgb(0, 0, 106);\n"
"font: 12pt \"Comic Sans MS\";\n"
""));
        Handicap_Button = new QPushButton(centralWidget);
        Handicap_Button->setObjectName(QStringLiteral("Handicap_Button"));
        Handicap_Button->setGeometry(QRect(90, 80, 150, 50));
        Handicap_Button->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 0, 0);\n"
"border-bottom-color: rgb(255, 0, 0);\n"
"border-right-color: rgb(255, 0, 0);\n"
"border-top-color: rgb(255, 0, 0);\n"
"border-color: rgb(255, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 94);\n"
"background-color: rgb(0, 0, 106);\n"
"font: 12pt \"Comic Sans MS\";\n"
""));
        NewsFeed_Button = new QPushButton(centralWidget);
        NewsFeed_Button->setObjectName(QStringLiteral("NewsFeed_Button"));
        NewsFeed_Button->setGeometry(QRect(90, 140, 150, 50));
        NewsFeed_Button->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 0, 0);\n"
"border-bottom-color: rgb(255, 0, 0);\n"
"border-right-color: rgb(255, 0, 0);\n"
"border-top-color: rgb(255, 0, 0);\n"
"border-color: rgb(255, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 94);\n"
"background-color: rgb(0, 0, 106);\n"
"font: 12pt \"Comic Sans MS\";\n"
""));
        Track_Button = new QPushButton(centralWidget);
        Track_Button->setObjectName(QStringLiteral("Track_Button"));
        Track_Button->setGeometry(QRect(90, 200, 150, 50));
        Track_Button->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 0, 0);\n"
"border-bottom-color: rgb(255, 0, 0);\n"
"border-right-color: rgb(255, 0, 0);\n"
"border-top-color: rgb(255, 0, 0);\n"
"border-color: rgb(255, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 94);\n"
"background-color: rgb(0, 0, 106);\n"
"font: 12pt \"Comic Sans MS\";"));
        Rules_Button = new QPushButton(centralWidget);
        Rules_Button->setObjectName(QStringLiteral("Rules_Button"));
        Rules_Button->setGeometry(QRect(90, 260, 150, 50));
        Rules_Button->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 0, 0);\n"
"border-bottom-color: rgb(255, 0, 0);\n"
"border-right-color: rgb(255, 0, 0);\n"
"border-top-color: rgb(255, 0, 0);\n"
"border-color: rgb(255, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 94);\n"
"background-color: rgb(0, 0, 106);\n"
"font: 12pt \"Comic Sans MS\";"));
        Social_Button = new QPushButton(centralWidget);
        Social_Button->setObjectName(QStringLiteral("Social_Button"));
        Social_Button->setGeometry(QRect(90, 320, 150, 50));
        Social_Button->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 170, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-left-color: rgb(255, 0, 0);\n"
"border-bottom-color: rgb(255, 0, 0);\n"
"border-right-color: rgb(255, 0, 0);\n"
"border-top-color: rgb(255, 0, 0);\n"
"border-color: rgb(255, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 94);\n"
"background-color: rgb(0, 0, 106);\n"
"font: 12pt \"Comic Sans MS\";"));
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
#ifndef QT_NO_WHATSTHIS
        Profile_Button->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>View &amp; Edit Your Profile</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Profile_Button->setText(QApplication::translate("MainWindow", "Profile", 0));
        Handicap_Button->setText(QApplication::translate("MainWindow", "Handicap", 0));
#ifndef QT_NO_WHATSTHIS
        NewsFeed_Button->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>See The Latest Golf News!</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        NewsFeed_Button->setText(QApplication::translate("MainWindow", "News Feed", 0));
#ifndef QT_NO_WHATSTHIS
        Track_Button->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Virtual Score Card</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Track_Button->setText(QApplication::translate("MainWindow", "Tracking Round", 0));
#ifndef QT_NO_WHATSTHIS
        Rules_Button->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Official Rules</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Rules_Button->setText(QApplication::translate("MainWindow", "Rules of the Game", 0));
#ifndef QT_NO_WHATSTHIS
        Social_Button->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Search For Other Players</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Social_Button->setText(QApplication::translate("MainWindow", "Social Connection", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
