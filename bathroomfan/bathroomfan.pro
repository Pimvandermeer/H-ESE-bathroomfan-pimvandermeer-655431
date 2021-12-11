TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        errorfanstate.cpp \
        fancontext.cpp \
        fanstate.cpp \
        idlefanstate.cpp \
        initfanstate.cpp \
        main.cpp \
        runfanstate.cpp

HEADERS += \
    errorfanstate.h \
    fancontext.h \
    fanstate.h \
    idlefanstate.h \
    initfanstate.h \
    runfanstate.h

