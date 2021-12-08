TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        fancontext.cpp \
        fanstate.cpp \
        idlefanstate.cpp \
        main.cpp \
        runfanstate.cpp

HEADERS += \
    fancontext.h \
    fanstate.h \
    idlefanstate.h \
    runfanstate.h
