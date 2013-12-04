/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_login
{
public:
    QWidget *centralwidget;
    QLineEdit *usernameLine;
    QLineEdit *passwordLine;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(350, 450);
        login->setAutoFillBackground(false);
        login->setStyleSheet(QStringLiteral("background-color: rgb(35, 240, 49);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        usernameLine = new QLineEdit(centralwidget);
        usernameLine->setObjectName(QStringLiteral("usernameLine"));
        usernameLine->setGeometry(QRect(100, 125, 150, 25));
        usernameLine->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 255);"));
        passwordLine = new QLineEdit(centralwidget);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setGeometry(QRect(100, 225, 150, 25));
        passwordLine->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 255);"));
        passwordLine->setEchoMode(QLineEdit::Password);
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(100, 100, 150, 25));
        usernameLabel->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
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
"\n"
""));
        usernameLabel->setAlignment(Qt::AlignCenter);
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(100, 200, 150, 25));
        passwordLabel->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
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
        passwordLabel->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(100, 275, 150, 25));
        loginButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
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
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", 0));
        usernameLabel->setText(QApplication::translate("login", "Username", 0));
        passwordLabel->setText(QApplication::translate("login", "Password", 0));
        loginButton->setText(QApplication::translate("login", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
