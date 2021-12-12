#ifndef INITFANSTATE_H
#define INITFANSTATE_H

#include "fancontext.h"

class InitFanState : public FanState
{
private:
    int sensorValue;
    Sensor *tempSensor = new Sensor("Temp Sensor", senseBehaviour::SENSE_TEMP , calcBehaviour::CALCULATE_TEMP);

public:
    int *myFunction();

 //   virtual int *E_START() override;
    virtual void E_START() override;
    virtual void E_RUN() override;
    virtual void E_STOP() override;
    virtual void E_ERROR() override;
    virtual void E_FIXED() override;

    virtual ~InitFanState();
};

#endif // INITFANSTATE_H
