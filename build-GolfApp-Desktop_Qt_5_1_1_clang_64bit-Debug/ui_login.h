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
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(350, 450);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        usernameLine = new QLineEdit(centralwidget);
        usernameLine->setObjectName(QStringLiteral("usernameLine"));
        usernameLine->setGeometry(QRect(100, 125, 150, 25));
        passwordLine = new QLineEdit(centralwidget);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setGeometry(QRect(100, 225, 150, 25));
        passwordLine->setEchoMode(QLineEdit::Password);
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(100, 100, 150, 25));
        usernameLabel->setAlignment(Qt::AlignCenter);
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(100, 200, 150, 25));
        passwordLabel->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(100, 275, 150, 25));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(100, 400, 150, 25));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 22));
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
        exitButton->setText(QApplication::translate("login", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
