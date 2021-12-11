#ifndef IDLEFANSTATE_H
#define IDLEFANSTATE_H

#include "fancontext.h"

class IdleFanState : public FanState
{
private:
    Sensor *tempSensor_;

public:
    IdleFanState(Sensor &tempsensor);

    virtual void E_START() override;
    virtual void E_RUN() override;
    virtual void E_STOP() override;
    virtual void E_ERROR() override;
    virtual void E_FIXED() override;


    virtual ~IdleFanState();
};

#endif // IDLEFANSTATE_H
