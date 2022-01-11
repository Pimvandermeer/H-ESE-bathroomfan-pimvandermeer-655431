TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH = ../3rdparty/

DISTFILES = ../initfile/init.ini

SOURCES += \
        calcbehaviour.cpp \
        errorfanstate.cpp \
        fancontext.cpp \
        fanstate.cpp \
        idlefanstate.cpp \
        initfanstate.cpp \
        logmanager.cpp \
        main.cpp \
        relay.cpp \
        runfanstate.cpp \
        sensebehaviour.cpp \
        sensor.cpp \
        timer.cpp

HEADERS += \
    calcbehaviour.h \
    errorfanstate.h \
    fancontext.h \
    fanstate.h \
    idlefanstate.h \
    initfanstate.h \
    log.h \
    logmanager.h \
    relay.h \
    runfanstate.h \
    sensebehaviour.h \
    sensor.h \
    ../display/appinfo.h \
    timer.h



