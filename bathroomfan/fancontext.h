#ifndef FANCONTEXT_H
#define FANCONTEXT_H

#include <iostream>
#include "fanstate.h"
#include "initfanstate.h"
#include "idlefanstate.h"
#include "runfanstate.h"

class FanContext
{
private:
    FanState *fanstate_;
    int *value;

public:
    FanContext(FanState *fanstate);

    ~FanContext();

    void TransitionTo(FanState *fanstate);

    void Request1();
    void Request2();

    void Start();

    int getValue();
    FanState *getFanState();
};

#endif // FANCONTEXT_H
