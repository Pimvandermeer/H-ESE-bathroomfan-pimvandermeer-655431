TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH = ../3rdparty/ \

SOURCES += \
    unittest.cpp \
    ../bathroomfan/sensor.cpp \
    ../bathroomfan/sensebehaviour.cpp \
    ../bathroomfan/calcbehaviour.cpp

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


