TEMPLATE     = lib
CONFIG	    += dll
SOURCES	     = main.cpp \
    dialog.cpp

TARGET	     = qtdialog
DLLDESTDIR   = $$[QT_INSTALL_PREFIX]/bin

include(../../src/qtwinmigrate.pri)

FORMS += \
    dialog.ui

HEADERS += \
    dialog.h
