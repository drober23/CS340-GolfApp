/********************************************************************************
** Form generated from reading UI file 'hole.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLE_H
#define UI_HOLE_H

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

class Ui_hole
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *hole)
    {
        if (hole->objectName().isEmpty())
            hole->setObjectName(QStringLiteral("hole"));
        hole->resize(350, 450);
        centralwidget = new QWidget(hole);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 331, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        previousButton = new QPushButton(centralwidget);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        previousButton->setGeometry(QRect(25, 375, 150, 25));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(200, 375, 150, 25));
        hole->setCentralWidget(centralwidget);
        menubar = new QMenuBar(hole);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 22));
        hole->setMenuBar(menubar);
        statusbar = new QStatusBar(hole);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        hole->setStatusBar(statusbar);

        retranslateUi(hole);

        QMetaObject::connectSlotsByName(hole);
    } // setupUi

    void retranslateUi(QMainWindow *hole)
    {
        hole->setWindowTitle(QApplication::translate("hole", "GolfApp", 0));
        previousButton->setText(QApplication::translate("hole", "Previous Hole", 0));
        nextButton->setText(QApplication::translate("hole", "Next Hole", 0));
    } // retranslateUi

};

namespace Ui {
    class hole: public Ui_hole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLE_H
