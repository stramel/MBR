#-------------------------------------------------
#
# Project created by QtCreator 2011-11-10T15:56:01
#
#-------------------------------------------------

QT       += core gui

TARGET = MBR

TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        test.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG += qtestlib
CONFIG += static
CONFIG -= console

RC_FILE = mbrico.rc
ICON = Map.icns

RESOURCES += MBRimages.qrc
























