#-------------------------------------------------
#
# Project created by QtCreator 2013-09-21T13:24:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MagicMinerGui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    filedialog.cpp

HEADERS  += mainwindow.h \
    filedialog.h

FORMS    += mainwindow.ui \
    filedialog.ui

OTHER_FILES +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Qt/5.1.1/msvc2010/lib/ -lQt5Gui
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Qt/5.1.1/msvc2010/lib/ -lQt5Guid

INCLUDEPATH += $$PWD/../../Qt/5.1.1/msvc2010/include
DEPENDPATH += $$PWD/../../Qt/5.1.1/msvc2010/include

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../Qt/5.1.1/msvc2010/lib/Qt5Gui.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../Qt/5.1.1/msvc2010/lib/Qt5Guid.lib

