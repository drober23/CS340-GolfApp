/********************************************************************************
** Form generated from reading UI file 'newsfeed.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSFEED_H
#define UI_NEWSFEED_H

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

class Ui_newsfeed
{
public:
    QWidget *centralwidget;
    QPushButton *PGATour;
    QPushButton *LPGATour;
    QPushButton *ESPN;
    QWebView *webView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newsfeed)
    {
        if (newsfeed->objectName().isEmpty())
            newsfeed->setObjectName(QStringLiteral("newsfeed"));
        newsfeed->resize(350, 450);
        centralwidget = new QWidget(newsfeed);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        PGATour = new QPushButton(centralwidget);
        PGATour->setObjectName(QStringLiteral("PGATour"));
        PGATour->setGeometry(QRect(0, 0, 115, 50));
        LPGATour = new QPushButton(centralwidget);
        LPGATour->setObjectName(QStringLiteral("LPGATour"));
        LPGATour->setGeometry(QRect(115, 0, 115, 50));
        ESPN = new QPushButton(centralwidget);
        ESPN->setObjectName(QStringLiteral("ESPN"));
        ESPN->setGeometry(QRect(230, 0, 115, 50));
        webView = new QWebView(centralwidget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(20, 90, 300, 200));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));
        newsfeed->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newsfeed);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 22));
        newsfeed->setMenuBar(menubar);
        statusbar = new QStatusBar(newsfeed);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        newsfeed->setStatusBar(statusbar);

        retranslateUi(newsfeed);

        QMetaObject::connectSlotsByName(newsfeed);
    } // setupUi

    void retranslateUi(QMainWindow *newsfeed)
    {
        newsfeed->setWindowTitle(QApplication::translate("newsfeed", "MainWindow", 0));
        PGATour->setText(QApplication::translate("newsfeed", "PGA Tour", 0));
        LPGATour->setText(QApplication::translate("newsfeed", "LPGA Tour", 0));
        ESPN->setText(QApplication::translate("newsfeed", "ESPN", 0));
    } // retranslateUi

};

namespace Ui {
    class newsfeed: public Ui_newsfeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSFEED_H
