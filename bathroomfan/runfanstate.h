#ifndef RUNFANSTATE_H
#define RUNFANSTATE_H

#include "fancontext.h"

class RunFanState : public FanState
{
public:
    virtual void Handle1() override;
    virtual void Handle2() override;

    //FUNCTIE MAKEN IN CPP FILE
//    virtual void E_START() override;
//    virtual void E_RUN() override;
//    virtual void E_STOP() override;
//    virtual void E_ERROR() override;
//    virtual void E_FIXED() override;

    virtual ~RunFanState();
};

#endif // RUNFANSTATE_H
