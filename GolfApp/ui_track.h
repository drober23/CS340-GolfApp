/********************************************************************************
** Form generated from reading UI file 'track.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACK_H
#define UI_TRACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_track
{
public:
    QWidget *centralwidget;
    QComboBox *courseBox;
    QComboBox *teeBox;
    QPushButton *confirmCourse;
    QPushButton *confirmTeeBox;
    QComboBox *startHoleBox;
    QPushButton *StartRound;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *track)
    {
        if (track->objectName().isEmpty())
            track->setObjectName(QStringLiteral("track"));
        track->resize(350, 450);
        track->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/LOGO.jpg);"));
        centralwidget = new QWidget(track);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        courseBox = new QComboBox(centralwidget);
        courseBox->setObjectName(QStringLiteral("courseBox"));
        courseBox->setGeometry(QRect(25, 50, 300, 25));
        teeBox = new QComboBox(centralwidget);
        teeBox->setObjectName(QStringLiteral("teeBox"));
        teeBox->setGeometry(QRect(25, 150, 300, 25));
        confirmCourse = new QPushButton(centralwidget);
        confirmCourse->setObjectName(QStringLiteral("confirmCourse"));
        confirmCourse->setGeometry(QRect(100, 100, 150, 25));
        confirmCourse->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 10pt \"Comic Sans MS\";"));
        confirmTeeBox = new QPushButton(centralwidget);
        confirmTeeBox->setObjectName(QStringLiteral("confirmTeeBox"));
        confirmTeeBox->setGeometry(QRect(100, 200, 150, 25));
        confirmTeeBox->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 10pt \"Comic Sans MS\";"));
        startHoleBox = new QComboBox(centralwidget);
        startHoleBox->setObjectName(QStringLiteral("startHoleBox"));
        startHoleBox->setGeometry(QRect(25, 250, 300, 25));
        StartRound = new QPushButton(centralwidget);
        StartRound->setObjectName(QStringLiteral("StartRound"));
        StartRound->setGeometry(QRect(100, 300, 150, 25));
        StartRound->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 10pt \"Comic Sans MS\";"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(100, 400, 150, 25));
        backButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 10pt \"Comic Sans MS\";"));
        track->setCentralWidget(centralwidget);
        menubar = new QMenuBar(track);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        track->setMenuBar(menubar);
        statusbar = new QStatusBar(track);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        track->setStatusBar(statusbar);

        retranslateUi(track);

        QMetaObject::connectSlotsByName(track);
    } // setupUi

    void retranslateUi(QMainWindow *track)
    {
        track->setWindowTitle(QApplication::translate("track", "MainWindow", 0));
        confirmCourse->setText(QApplication::translate("track", "Next", 0));
        confirmTeeBox->setText(QApplication::translate("track", "Next", 0));
        StartRound->setText(QApplication::translate("track", "Start Round", 0));
        backButton->setText(QApplication::translate("track", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class track: public Ui_track {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACK_H
