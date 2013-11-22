#-------------------------------------------------
#
# Project created by QtCreator 2013-11-14T21:26:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GolfApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    newsfeed.cpp \
    viewrules.cpp

HEADERS  += mainwindow.h \
    newsfeed.h \
    viewrules.h

FORMS    += mainwindow.ui \
    newsfeed.ui \
    viewrules.ui
