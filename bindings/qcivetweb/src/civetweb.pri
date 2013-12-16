INCLUDEPATH += ../../../include ../../../src

SOURCES += ../../../src/civetweb.c ../../../src/md5.inl
HEADERS += ../../../include/civetweb.h

linux*:LIBS += -ldl
win32:LIBS += -lWs2_32
