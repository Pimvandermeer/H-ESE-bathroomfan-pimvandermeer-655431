#ifndef IDLEFANSTATE_H
#define IDLEFANSTATE_H

#include "fancontext.h"

class IdleFanState : public FanState
{
public:
    virtual void Handle1();
    virtual void Handle2();

    virtual ~IdleFanState();
};

#endif // IDLEFANSTATE_H
