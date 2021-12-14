#ifndef RUNFANSTATE_H
#define RUNFANSTATE_H

#include "fancontext.h"
#include "relay.h"
#include "timer.h"

class RunFanState : public FanState
{
private:
    std::string exceedSensorName_ = "None";
    double *exceedValue_ = NULL;
    bool enteredAfterToiler_;

    Timer *timer_ = new Timer(3000);
    Relay *relay_ = new Relay(false);


public:
   RunFanState(std::string exceedSensorName, double &exceedValue);

   virtual void E_CONFIG() override;
   virtual void E_START() override;
   virtual void E_RUN() override;
   virtual void E_STOP() override;
   virtual void E_ERROR() override;
   virtual void E_FIXED() override;

   virtual ~RunFanState();
};

#endif // RUNFANSTATE_H
