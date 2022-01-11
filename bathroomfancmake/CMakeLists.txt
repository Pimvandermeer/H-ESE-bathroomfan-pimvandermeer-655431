cmake_minimum_required(VERSION 3.5)

project(bathroomfancmake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(../3rdparty/
                    ../initfile/
                    )

add_executable(bathroomfan
    calcbehaviour.cpp calcbehaviour.h
    sensebehaviour.cpp sensebehaviour.h
    sensor.cpp sensor.h
    fancontext.cpp fancontext.h
    fanstate.cpp fanstate.h
    runfanstate.cpp runfanstate.h
    idlefanstate.cpp idlefanstate.h
    initfanstate.cpp initfanstate.h
    errorfanstate.cpp errorfanstate.h
    relay.cpp relay.h
    timer.cpp timer.h
    log.h
    logmanager.cpp logmanager.h
    main.cpp)

add_executable(UnitTest
    calcbehaviour.cpp calcbehaviour.h
    sensebehaviour.cpp sensebehaviour.h
    sensor.cpp sensor.h
    fancontext.cpp fancontext.h
    fanstate.cpp fanstate.h
    runfanstate.cpp runfanstate.h
    idlefanstate.cpp idlefanstate.h
    initfanstate.cpp initfanstate.h
    errorfanstate.cpp errorfanstate.h
    relay.cpp relay.h
    timer.cpp timer.h
    log.h
    logmanager.cpp logmanager.h
    ../test/main.cpp
    ../test/context_test.cpp
    ../test/state_test.cpp
    ../test/relay_test.cpp
    ../test/log_test.cpp
    ../test/timer_test.cpp
    ../test/sensor_test.cpp
    )
