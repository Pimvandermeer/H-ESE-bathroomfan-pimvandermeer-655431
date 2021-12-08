#ifndef FANCONTEXT_H
#define FANCONTEXT_H

#include <iostream>
#include "fanstate.h"
#include "idlefanstate.h"
#include "runfanstate.h"

class FanContext
{
private:
    FanState *fanstate_;

public:
    FanContext(FanState *fanstate);

    ~FanContext();

    void TransitionTo(FanState *fanstate);

    void Request1();
    void Request2();
};

#endif // FANCONTEXT_H
