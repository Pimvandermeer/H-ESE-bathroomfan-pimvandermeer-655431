#ifndef RUNFANSTATE_H
#define RUNFANSTATE_H

#include "fancontext.h"
#include "relay.h"
#include "timer.h"

/*Run fan state is used at the moment a Idlestate transfers to Run
 * the run fan state doesn't need to know the sensors it only needs to know
 * how long it must run.
 * there for timer class is made for timing in the display of the terminal
 * and the relay is made to turn the bathroom on
 */

class RunFanState : public FanState
{
private:
    Timer *timer_ = new Timer(3000);
    Relay *relay_ = new Relay(false);

public:
   RunFanState();

   virtual void E_CONFIG() override;
   virtual void E_START() override;
   virtual void E_RUN() override;
   virtual void E_STOP() override;
   virtual void E_ERROR() override;
   virtual void E_FIXED() override;

   virtual ~RunFanState();
};

#endif // RUNFANSTATE_H
