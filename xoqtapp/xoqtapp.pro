QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    defectdetectiondialogscreen.cpp \
    enrolementscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    nextwindow1.cpp

HEADERS += \
    defectdetectiondialogscreen.h \
    enrolementscreen.h \
    mainwindow.h \
    nextwindow1.h

FORMS += \
    defectdetectiondialogscreen.ui \
    enrolementscreen.ui \
    mainwindow.ui \
    nextwindow1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




