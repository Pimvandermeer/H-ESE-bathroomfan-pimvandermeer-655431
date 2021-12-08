#ifndef RUNFANSTATE_H
#define RUNFANSTATE_H

#include "fancontext.h"

class RunFanState : public FanState
{
public:
    virtual void Handle1();
    virtual void Handle2();

    virtual ~RunFanState();
};

#endif // RUNFANSTATE_H
