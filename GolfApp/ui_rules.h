/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
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

class Ui_rules
{
public:
    QWidget *centralwidget;
    QWebView *webView;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rules)
    {
        if (rules->objectName().isEmpty())
            rules->setObjectName(QStringLiteral("rules"));
        rules->resize(350, 450);
        rules->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/LOGO.jpg);"));
        centralwidget = new QWidget(rules);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        webView = new QWebView(centralwidget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(0, 0, 350, 400));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(100, 400, 150, 25));
        backButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 10pt \"Comic Sans MS\";"));
        rules->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rules);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        rules->setMenuBar(menubar);
        statusbar = new QStatusBar(rules);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        rules->setStatusBar(statusbar);

        retranslateUi(rules);

        QMetaObject::connectSlotsByName(rules);
    } // setupUi

    void retranslateUi(QMainWindow *rules)
    {
        rules->setWindowTitle(QApplication::translate("rules", "GolfApp", 0));
        backButton->setText(QApplication::translate("rules", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class rules: public Ui_rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H
