/********************************************************************************
** Form generated from reading UI file 'web.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEB_H
#define UI_WEB_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_web
{
public:
    QWebView *webView;

    void setupUi(QWidget *web)
    {
        if (web->objectName().isEmpty())
            web->setObjectName(QStringLiteral("web"));
        web->resize(400, 300);
        webView = new QWebView(web);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(50, 30, 300, 200));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        retranslateUi(web);

        QMetaObject::connectSlotsByName(web);
    } // setupUi

    void retranslateUi(QWidget *web)
    {
        web->setWindowTitle(QApplication::translate("web", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class web: public Ui_web {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEB_H
