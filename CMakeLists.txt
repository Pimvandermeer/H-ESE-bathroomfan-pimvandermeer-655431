cmake_minimum_required(VERSION 3.5)

project(bathroomfan LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(3rdparty/
                    initfile/
                    bathroomfancmake/
                    test/
                    )

add_executable(bathroomfanprogram
    bathroomfan/calcbehaviour.cpp
    bathroomfan/calcbehaviour.h
    bathroomfan/sensebehaviour.cpp
    bathroomfan/sensebehaviour.h
    bathroomfan/sensor.cpp
    bathroomfan/sensor.h
    bathroomfan/fancontext.cpp
    bathroomfan/fancontext.h
    bathroomfan/fanstate.cpp
    bathroomfan/fanstate.h
    bathroomfan/runfanstate.cpp
    bathroomfan/runfanstate.h
    bathroomfan/idlefanstate.cpp
    bathroomfan/idlefanstate.h
    bathroomfan/initfanstate.cpp
    bathroomfan/initfanstate.h
    bathroomfan/errorfanstate.cpp
    bathroomfan/errorfanstate.h
    bathroomfan/relay.cpp
    bathroomfan/relay.h
    bathroomfan/timer.cpp
    bathroomfan/timer.h
    bathroomfan/log.h
    bathroomfan/logmanager.cpp
    bathroomfan/logmanager.h
    bathroomfan/main.cpp
    )

add_executable(UnitTest
    bathroomfan/calcbehaviour.cpp
    bathroomfan/calcbehaviour.h
    bathroomfan/sensebehaviour.cpp
    bathroomfan/sensebehaviour.h
    bathroomfan/sensor.cpp
    bathroomfan/sensor.h
    bathroomfan/fancontext.cpp
    bathroomfan/fancontext.h
    bathroomfan/fanstate.cpp
    bathroomfan/fanstate.h
    bathroomfan/runfanstate.cpp
    bathroomfan/runfanstate.h
    bathroomfan/idlefanstate.cpp
    bathroomfan/idlefanstate.h
    bathroomfan/initfanstate.cpp
    bathroomfan/initfanstate.h
    bathroomfan/errorfanstate.cpp
    bathroomfan/errorfanstate.h
    bathroomfan/relay.cpp
    bathroomfan/relay.h
    bathroomfan/timer.cpp
    bathroomfan/timer.h
    bathroomfan/log.h
    bathroomfan/logmanager.cpp
    bathroomfan/logmanager.h
    test/main.cpp
    test/context_test.cpp
    test/state_test.cpp
    test/relay_test.cpp
    test/log_test.cpp
    test/timer_test.cpp
    test/sensor_test.cpp
    )
