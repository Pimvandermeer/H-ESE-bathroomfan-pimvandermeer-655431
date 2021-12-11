#ifndef IDLEFANSTATE_H
#define IDLEFANSTATE_H

#include "fancontext.h"

class IdleFanState : public FanState
{
public:
    virtual void Handle1() override;
    virtual void Handle2() override;

 //   virtual int *E_START() override;
//    virtual void E_RUN() override;
//    virtual void E_STOP() override;
//    virtual void E_ERROR() override;
//    virtual void E_FIXED() override;


    virtual ~IdleFanState();
};

#endif // IDLEFANSTATE_H
