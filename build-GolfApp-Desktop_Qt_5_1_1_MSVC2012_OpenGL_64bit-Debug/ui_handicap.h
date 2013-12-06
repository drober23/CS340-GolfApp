/********************************************************************************
** Form generated from reading UI file 'handicap.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDICAP_H
#define UI_HANDICAP_H

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

class Ui_handicap
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *handicap)
    {
        if (handicap->objectName().isEmpty())
            handicap->setObjectName(QStringLiteral("handicap"));
        handicap->resize(350, 450);
        centralwidget = new QWidget(handicap);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(100, 400, 150, 25));
        handicap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(handicap);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 22));
        handicap->setMenuBar(menubar);
        statusbar = new QStatusBar(handicap);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        handicap->setStatusBar(statusbar);

        retranslateUi(handicap);

        QMetaObject::connectSlotsByName(handicap);
    } // setupUi

    void retranslateUi(QMainWindow *handicap)
    {
        handicap->setWindowTitle(QApplication::translate("handicap", "GolfApp", 0));
        backButton->setText(QApplication::translate("handicap", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class handicap: public Ui_handicap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDICAP_H
