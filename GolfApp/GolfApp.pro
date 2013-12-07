#-------------------------------------------------
#
# Project created by QtCreator 2013-11-14T21:26:57
# Notes:
# November 22, 2013, add QT += webkitwidgets to use
# QWebView for GolfApp
#-------------------------------------------------

QT       += core gui
QT       += webkitwidgets
QT       += sql
unix:LIBS += -lpq

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GolfApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    newsfeed.cpp \
    rules.cpp \
    track.cpp \
    handicap.cpp \
    profile.cpp \
    hole.cpp \
    login.cpp \
    database.cpp \
    social.cpp

HEADERS  += mainwindow.h \
    newsfeed.h \
    rules.h \
    track.h \
    handicap.h \
    profile.h \
    hole.h \
    login.h \
    database.h \
    social.h

FORMS    += mainwindow.ui \
    newsfeed.ui \
    rules.ui \
    track.ui \
    handicap.ui \
    profile.ui \
    hole.ui \
    login.ui \
    social.ui

OTHER_FILES += \
    ../ACDB/golfapp.accdb

RESOURCES += \
    logo.qrc
