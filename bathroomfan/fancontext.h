#ifndef FANCONTEXT_H
#define FANCONTEXT_H

#include <iostream>
#include "fanstate.h"
#include "initfanstate.h"
#include "idlefanstate.h"
#include "runfanstate.h"
#include "errorfanstate.h"
#include "logmanager.h"

/*The Fancontaxt is the object the client speaks to. Via
 *the contaxt the state will change. This way  when we add more and more states
 *we won't have gigantic conditionals but it's kept clean.
*/

class FanContext
{
private:
    FanState *fanState_;
    // LogManager stateLogger_;
    int minutesToRunFan_ = 0;

public:
    FanContext(FanState *fanstate, int &minutes);

    ~FanContext();

    void TransitionTo(FanState *fanstate);

    int *getMinutesToRun();

    void Config();
    void Start();
    void Run();
    void Stop();
    void Error();
    void Fixed();
};

#endif // FANCONTEXT_H
