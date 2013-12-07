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
#include <QtWidgets/QGridLayout>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *handicap)
    {
        if (handicap->objectName().isEmpty())
            handicap->setObjectName(QStringLiteral("handicap"));
        handicap->resize(350, 450);
        centralwidget = new QWidget(handicap);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/LOGO.jpg);"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(100, 400, 150, 25));
        backButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 10pt \"Comic Sans MS\";"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 19, 331, 371));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        handicap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(handicap);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
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
