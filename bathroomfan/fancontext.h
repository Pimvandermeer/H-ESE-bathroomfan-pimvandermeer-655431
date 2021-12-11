#ifndef FANCONTEXT_H
#define FANCONTEXT_H

#include <iostream>
#include "fanstate.h"
#include "initfanstate.h"
#include "idlefanstate.h"
#include "runfanstate.h"
#include "../display/display.h"


class FanContext
{
private:
    FanState *fanState_;


    static int numStates;
  //  int *value;

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



  //  int getValue();
  //  FanState *getFanState();
};

#endif // FANCONTEXT_H
