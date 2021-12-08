#ifndef ERRORFANSTATE_H
#define ERRORFANSTATE_H

#include "fancontext.h"

class ErrorFanState : public FanState
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

    virtual ~ErrorFanState();
};

#endif // ERRORFANSTATE_H
