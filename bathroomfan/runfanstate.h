#ifndef RUNFANSTATE_H
#define RUNFANSTATE_H

#include "fancontext.h"
#include "relay.h"
#include "timer.h"

class RunFanState : public FanState
{
private:
    Timer *timer_ = new Timer(3000);
    Relay *relay_ = new Relay(false);

public:

   virtual void E_START() override;
   virtual void E_RUN() override;
   virtual void E_STOP() override;
   virtual void E_ERROR() override;
   virtual void E_FIXED() override;

   virtual ~RunFanState();
};

#endif // RUNFANSTATE_H
