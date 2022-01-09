TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH = ../3rdparty/ \

SOURCES += \
    main.cpp \
    ../bathroomfan/sensor.cpp \
    ../bathroomfan/sensebehaviour.cpp \
    ../bathroomfan/calcbehaviour.cpp \
    ../bathroomfan/relay.cpp \
    ../bathroomfan/timer.cpp \
    relay_test.cpp \
    sensor_test.cpp \
    state_test.cpp \
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
    ../display/keyboard.h \
    ../display/devconsole.h \
    ../bathoomfan/timer.h


