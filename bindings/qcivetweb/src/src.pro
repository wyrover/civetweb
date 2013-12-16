# Qt modules
QT -= gui
QT += core

# Project configuration
CONFIG += staticlib
TEMPLATE = lib
TARGET = ../qcivetweb

# Civetweb
include(civetweb.pri)

# Source
HEADERS += qcivetserver.h
SOURCES += qcivetserver.cpp

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
