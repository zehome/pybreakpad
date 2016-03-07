HEADERS += cbreakpad.h
SOURCES += cbreakpad.cpp

BREAKPAD_PATH = /home/ed/breakpad/breakpad
LIBS += $$BREAKPAD_PATH/src/client/linux/libbreakpad_client.a

INCLUDEPATH += $$PWD
INCLUDEPATH += $$BREAKPAD_PATH/src


TEMPLATE = lib
CONFIG += lib
CONFIG -= qt
target.path = $$[QT_INSTALL_LIBS]
INSTALLS += target
