#ifndef FANCONTEXT_H
#define FANCONTEXT_H

#include <iostream>
#include "fanstate.h"
#include "initfanstate.h"
#include "idlefanstate.h"
#include "runfanstate.h"
#include "../display/display.h"
#include "logmanager.h"

class FanContext
{
private:
    FanState *fanState_;
    // LogManager stateLogger_;

    static int numStates;

public:
    FanContext(FanState *fanstate);

    ~FanContext();

    void TransitionTo(FanState *fanstate);

    void adNumStates();
    void delNumStates();

    void Start();
    void Run();
    void Stop();
    void Error();
    void Fixed();
};

#endif // FANCONTEXT_H
