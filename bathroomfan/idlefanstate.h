#ifndef IDLEFANSTATE_H
#define IDLEFANSTATE_H

#include "fancontext.h"

class IdleFanState : public FanState
{
private:
    Sensor *tempSensor_ = NULL;
    Sensor *humSensor_ = NULL;
    Sensor *proxSensor_ = NULL;

public:
    IdleFanState(Sensor &tempSensor, Sensor &humSensor, Sensor &proxSensor);

    virtual void E_CONFIG() override;
    virtual void E_START() override;
    virtual void E_RUN() override;
    virtual void E_STOP() override;
    virtual void E_ERROR() override;
    virtual void E_FIXED() override;


    virtual ~IdleFanState();
};

#endif // IDLEFANSTATE_H
