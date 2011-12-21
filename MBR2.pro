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

static {
    CONFIG += static
    CONFIG += staticlib
    DEFINES += STATIC
    message("~~~ Static Build ~~~")
}

CONFIG(debug, debug|release) {
    mac: TARGET = $$join(TARGET,,,_debug)
    win32: TARGET = $$join(TARGET,,,d)
}

RC_FILE = mbrico.rc

RESOURCES += MBRimages.qrc
























