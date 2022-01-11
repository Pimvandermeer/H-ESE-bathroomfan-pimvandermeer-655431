TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH = ../3rdparty/ \

SOURCES += \
    ../bathroomfan/sensor.cpp \
    ../bathroomfan/sensebehaviour.cpp \
    ../bathroomfan/calcbehaviour.cpp \
    ../bathroomfan/relay.cpp \
    ../bathroomfan/timer.cpp \
    ../bathroomfan/logmanager.cpp \
    ../bathroomfan/fancontext.cpp \
    ../bathroomfan/fanstate.cpp \
    ../bathroomfan/initfanstate.cpp\
    ../bathroomfan/idlefanstate.cpp \
    ../bathroomfan/runfanstate.cpp \
    ../bathroomfan/errorfanstate.cpp \
    context_test.cpp \
    state_test.cpp \
    relay_test.cpp \
    sensor_test.cpp \
    log_test.cpp \
    main.cpp \
    timer_test.cpp

HEADERS += \
    ../3rdparty/catch/catch.hpp \
    ../bathoomfan/calcbehaviour.h \
    ../bathoomfan/errorfanstate.h \
    ../bathoomfan/fancontext.h \
    ../bathoomfan/fanstate.h \
    ../bathoomfan/idlefanstate.h \
    ../bathoomfan/initfanstate.h \
    ../bathoomfan/log.h \
    ../bathoomfan/logmanager.h \
    ../bathoomfan/relay.h \
    ../bathoomfan/runfanstate.h \
    ../bathoomfan/sensebehaviour.h \
    ../bathoomfan/sensor.h \
    ../display/appinfo.h \
    ../bathoomfan/timer.h


