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

    virtual void Handle1();
    virtual void Handle2();


    virtual int *E_START();
    virtual void E_RUN();
    virtual void E_STOP();
    virtual void E_ERROR();
    virtual void E_FIXED();
};

#endif // FANSTATE_H
