#-------------------------------------------------
#
# Project created by QtCreator 2013-11-14T21:26:57
# Notes:
# November 22, 2013, add QT += webkitwidgets to use
# QWebView for GolfApp
#-------------------------------------------------

QT       += core gui
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GolfApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    newsfeed.cpp \
    rules.cpp \
    track.cpp \
    social.cpp \
    handicap.cpp \
    profile.cpp \
    hole.cpp

HEADERS  += mainwindow.h \
    newsfeed.h \
    rules.h \
    track.h \
    social.h \
    handicap.h \
    profile.h \
    hole.h

FORMS    += mainwindow.ui \
    newsfeed.ui \
    rules.ui \
    track.ui \
    social.ui \
    handicap.ui \
    profile.ui \
    hole.ui
