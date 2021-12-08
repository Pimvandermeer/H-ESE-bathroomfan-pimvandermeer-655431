#ifndef ERRORFANSTATE_H
#define ERRORFANSTATE_H

#include "fancontext.h"

class ErrorFanState : public FanState
{
public:
    virtual void Handle1();
    virtual void Handle2();

    virtual ~ErrorFanState();
};

#endif // ERRORFANSTATE_H
