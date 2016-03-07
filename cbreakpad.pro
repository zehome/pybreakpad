HEADERS += cbreakpad.h
SOURCES += cbreakpad.cpp

BREAKPAD_PATH = ../breakpad
LIBS += $$BREAKPAD_PATH/src/client/linux/libbreakpad_client.a

INCLUDEPATH += $$PWD
INCLUDEPATH += $$BREAKPAD_PATH/src


TEMPLATE = lib
CONFIG += lib
CONFIG -= qt
target.path = $$[QT_INSTALL_LIBS]
INSTALLS += target
