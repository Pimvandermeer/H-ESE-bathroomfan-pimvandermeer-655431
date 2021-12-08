#ifndef INITFANSTATE_H
#define INITFANSTATE_H

#include "fancontext.h"

class InitFanState : public FanState
{
public:
    virtual void Handle1();
    virtual void Handle2();

    virtual ~InitFanState();
};

#endif // INITFANSTATE_H
