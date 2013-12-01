/********************************************************************************
** Form generated from reading UI file 'viewrules.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRULES_H
#define UI_VIEWRULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewRules
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *viewRules)
    {
        if (viewRules->objectName().isEmpty())
            viewRules->setObjectName(QStringLiteral("viewRules"));
        viewRules->resize(800, 600);
        menubar = new QMenuBar(viewRules);
        menubar->setObjectName(QStringLiteral("menubar"));
        viewRules->setMenuBar(menubar);
        centralwidget = new QWidget(viewRules);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        viewRules->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(viewRules);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        viewRules->setStatusBar(statusbar);

        retranslateUi(viewRules);

        QMetaObject::connectSlotsByName(viewRules);
    } // setupUi

    void retranslateUi(QMainWindow *viewRules)
    {
        viewRules->setWindowTitle(QApplication::translate("viewRules", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class viewRules: public Ui_viewRules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRULES_H
