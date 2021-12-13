#ifndef INITFANSTATE_H
#define INITFANSTATE_H

#include "fancontext.h"

class InitFanState : public FanState
{
private:
    Sensor *tempSensor_ = new Sensor("Temperature Sensor", senseBehaviour::SENSE_TEMP , calcBehaviour::CALCULATE_TEMP);
    Sensor *humSensor_ = new Sensor("Humidity Sensor", senseBehaviour::SENSE_HUM, calcBehaviour::CALCULATE_HUM);

public:
  //  int *myFunction();

 //   virtual int *E_START() override;
    virtual void E_START() override;
    virtual void E_RUN() override;
    virtual void E_STOP() override;
    virtual void E_ERROR() override;
    virtual void E_FIXED() override;

    virtual ~InitFanState();
};

#endif // INITFANSTATE_H
