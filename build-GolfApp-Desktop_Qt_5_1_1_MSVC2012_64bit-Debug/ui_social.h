/********************************************************************************
** Form generated from reading UI file 'social.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOCIAL_H
#define UI_SOCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_social
{
public:
    QWidget *centralwidget;
    QLineEdit *FirstNameSearch;
    QLineEdit *LastNameSearch;
    QLabel *FirstNameLabel;
    QLabel *LastNameLabel;
    QPushButton *SearchButton;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *social)
    {
        if (social->objectName().isEmpty())
            social->setObjectName(QStringLiteral("social"));
        social->resize(350, 450);
        centralwidget = new QWidget(social);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        FirstNameSearch = new QLineEdit(centralwidget);
        FirstNameSearch->setObjectName(QStringLiteral("FirstNameSearch"));
        FirstNameSearch->setGeometry(QRect(125, 50, 150, 25));
        LastNameSearch = new QLineEdit(centralwidget);
        LastNameSearch->setObjectName(QStringLiteral("LastNameSearch"));
        LastNameSearch->setGeometry(QRect(125, 100, 150, 25));
        FirstNameLabel = new QLabel(centralwidget);
        FirstNameLabel->setObjectName(QStringLiteral("FirstNameLabel"));
        FirstNameLabel->setGeometry(QRect(25, 50, 100, 25));
        FirstNameLabel->setAlignment(Qt::AlignCenter);
        LastNameLabel = new QLabel(centralwidget);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));
        LastNameLabel->setGeometry(QRect(25, 100, 100, 25));
        LastNameLabel->setAlignment(Qt::AlignCenter);
        SearchButton = new QPushButton(centralwidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(100, 150, 150, 25));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(100, 400, 150, 25));
        social->setCentralWidget(centralwidget);
        menubar = new QMenuBar(social);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 22));
        social->setMenuBar(menubar);
        statusbar = new QStatusBar(social);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        social->setStatusBar(statusbar);

        retranslateUi(social);

        QMetaObject::connectSlotsByName(social);
    } // setupUi

    void retranslateUi(QMainWindow *social)
    {
        social->setWindowTitle(QApplication::translate("social", "MainWindow", 0));
        FirstNameLabel->setText(QApplication::translate("social", "First Name", 0));
        LastNameLabel->setText(QApplication::translate("social", "Last Name", 0));
        SearchButton->setText(QApplication::translate("social", "Search", 0));
        backButton->setText(QApplication::translate("social", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class social: public Ui_social {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOCIAL_H
