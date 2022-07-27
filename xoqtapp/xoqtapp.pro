QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cameracalibrationscreen.cpp \
    defectdetectiondialogscreen.cpp \
    encodercalibrationscreen.cpp \
    enrolementscreen.cpp \
    lablepastercalibrationscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    menuscreen.cpp \
    nextwindow1.cpp \
    samplecapturescreen.cpp

HEADERS += \
    cameracalibrationscreen.h \
    defectdetectiondialogscreen.h \
    encodercalibrationscreen.h \
    enrolementscreen.h \
    lablepastercalibrationscreen.h \
    mainwindow.h \
    menuscreen.h \
    nextwindow1.h \
    samplecapturescreen.h

FORMS += \
    cameracalibrationscreen.ui \
    defectdetectiondialogscreen.ui \
    encodercalibrationscreen.ui \
    enrolementscreen.ui \
    lablepastercalibrationscreen.ui \
    mainwindow.ui \
    menuscreen.ui \
    nextwindow1.ui \
    samplecapturescreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




