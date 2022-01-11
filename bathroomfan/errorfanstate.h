#ifndef ERRORFANSTATE_H
#define ERRORFANSTATE_H

#include "fancontext.h"

// At this moment there is no known error which should be taken care of but it is possible in this event
// after the event the concext should change again to init state

class ErrorFanState : public FanState
{
public:
    virtual void E_CONFIG() override;
    virtual void E_START() override;
    virtual void E_RUN() override;
    virtual void E_STOP() override;
    virtual void E_ERROR() override;
    virtual void E_FIXED() override;

    virtual ~ErrorFanState();
};

#endif // ERRORFANSTATE_H