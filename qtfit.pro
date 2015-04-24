            #-------------------------------------------------
# File .pro created by H. Saadaoui 2015-01-10T
#-------------------------------------------------

TEMPLATE     = app

QT          += core gui sql printsupport webkitwidgets

CONFIG      += qt warn_off release include_dependpath

#DEFINES     += QT_NO_DEBUG_OUTPUT

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DEPENDPATH  += ./src ./etc ./src/analysis ./src/results ./src/database ./src/graphics

INCLUDEPATH += $$DEPENDPATH

VPATH       += $$DEPENDPATH

LIBS        += -lMinuit2 -lgomp

SOURCES     += main.cpp \
               mainwindow.cpp \
               analysis.cpp fitting_routine.cpp plugin_read.cpp read_data.cpp ascii.cpp \
               results.cpp  \
               database.cpp \
               graphics.cpp qcustomplot.cpp

HEADERS     += mainwindow.h \
               analysis.h  fitting_routine.h plugin_read.h read_data.h parameters.h ascii.h \
               results.h \
               database.h \
               graphics.h qcustomplot.h

FORMS       += mainwindow.ui \
               analysis.ui \
               results.ui \
               database.ui \
               graphics.ui

BUILDDIR     = $$PWD/.bin/
OBJECTS_DIR  = $${BUILDDIR}
MOC_DIR      = $${BUILDDIR}
RCC_DIR      = $${BUILDDIR}
UI_DIR       = $${BUILDDIR}

RESOURCES   += ./etc/resources.qrc

TARGET       = ./qtfit

PREFIX       = /usr/local/qtfit

target.path  = /usr/local/bin
target.files = qtfit

exe.path     = $$PREFIX/bin
exe.files    = qtfit

doc.path     = $$PREFIX/doc
doc.files    = etc/doc/*

INSTALLS    +=  exe doc target
