#-------------------------------------------------
#
# Project created by QtCreator 2018-03-21T20:34:26
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VideoDesktopApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    thethao.cpp \
    amthuc.cpp \
    phim.cpp

HEADERS  += mainwindow.h \
    thethao.h \
    amthuc.h \
    phim.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
