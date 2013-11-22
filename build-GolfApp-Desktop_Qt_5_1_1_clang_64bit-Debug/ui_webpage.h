/********************************************************************************
** Form generated from reading UI file 'webpage.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBPAGE_H
#define UI_WEBPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_webpage
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *webpage)
    {
        if (webpage->objectName().isEmpty())
            webpage->setObjectName(QStringLiteral("webpage"));
        webpage->resize(350, 450);
        centralwidget = new QWidget(webpage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        webpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(webpage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 22));
        webpage->setMenuBar(menubar);
        statusbar = new QStatusBar(webpage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        webpage->setStatusBar(statusbar);
        toolBar = new QToolBar(webpage);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        webpage->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(webpage);

        QMetaObject::connectSlotsByName(webpage);
    } // setupUi

    void retranslateUi(QMainWindow *webpage)
    {
        webpage->setWindowTitle(QApplication::translate("webpage", "MainWindow", 0));
        toolBar->setWindowTitle(QApplication::translate("webpage", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class webpage: public Ui_webpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBPAGE_H
