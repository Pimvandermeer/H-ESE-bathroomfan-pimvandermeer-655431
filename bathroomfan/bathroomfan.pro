TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH = ../3rdparty/ \


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
        ../display/keyboard.cpp \
        ../display/devconsole.cpp \
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
    ../display/keyboard.h \
    ../display/devconsole.h \
    timer.h


