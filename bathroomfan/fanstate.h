#ifndef FANSTATE_H
#define FANSTATE_H

#include <iostream>

class FanContext;

class FanState
{
protected:
    FanContext *fancontext_;

public:
    virtual ~FanState();

    void set_context(FanContext *fancontext);

    virtual void Handle1() = 0;
    virtual void Handle2() = 0;
};

#endif // FANSTATE_H
