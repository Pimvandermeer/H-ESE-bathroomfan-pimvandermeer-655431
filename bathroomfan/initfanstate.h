#ifndef INITFANSTATE_H
#define INITFANSTATE_H

#include "fancontext.h"

class InitFanState : public FanState
{
private:
    Sensor *tempSensor_ = new Sensor("Temperature Sensor", senseBehaviour::SENSE_TEMP , calcBehaviour::CALCULATE_TEMP);
    Sensor *humSensor_ = new Sensor("Humidity Sensor", senseBehaviour::SENSE_HUM, calcBehaviour::CALCULATE_HUM);
    Sensor *proxSensor_ = new Sensor("Proximity Sensor", senseBehaviour::SENSE_PROX, calcBehaviour::CALCULATE_PROX);

public:
    virtual void E_CONFIG() override;
    virtual void E_START() override;
    virtual void E_RUN() override;
    virtual void E_STOP() override;
    virtual void E_ERROR() override;
    virtual void E_FIXED() override;

    virtual Sensor *getTempSensor();

    virtual ~InitFanState();
};

#endif // INITFANSTATE_H
