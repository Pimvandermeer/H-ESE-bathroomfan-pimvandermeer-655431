#ifndef FANSTATE_H
#define FANSTATE_H

#include <iostream>
#include "sensor.h"
#include "../display/display.h"

class FanContext;

class FanState
{
protected:
    FanContext *fanContext_;

public:
    virtual ~FanState();

    void setContext(FanContext *fanContext);

  //  virtual int *E_START();
    virtual void E_START();
    virtual void E_RUN();
    virtual void E_STOP();
    virtual void E_ERROR();
    virtual void E_FIXED();
};

#endif // FANSTATE_H
