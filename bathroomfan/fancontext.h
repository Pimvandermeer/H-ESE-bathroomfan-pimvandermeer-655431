#ifndef FANCONTEXT_H
#define FANCONTEXT_H

#include <iostream>
#include "fanstate.h"
#include "initfanstate.h"
#include "idlefanstate.h"
#include "runfanstate.h"
#include "errorfanstate.h"
#include "logmanager.h"

class FanContext
{
private:
    FanState *fanState_;
    // LogManager stateLogger_;
    int minutesToRunFan_ = 0;

public:
    FanContext(FanState *fanstate, int &minutes);

    ~FanContext();

    void TransitionTo(FanState *fanstate);

    int *getMinutesToRun();

    void Config();
    void Start();
    void Run();
    void Stop();
    void Error();
    void Fixed();
};

#endif // FANCONTEXT_H
