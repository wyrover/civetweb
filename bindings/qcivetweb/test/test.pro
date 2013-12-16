QT -= gui
QT += core testlib

CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app
TARGET = ../qcivetweb-test

INCLUDEPATH += ../../../include ../src
LIBS += ../libqcivetweb.a

HEADERS += qcivetservertest.h

SOURCES += main.cpp

