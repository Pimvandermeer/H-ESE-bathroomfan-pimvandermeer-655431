#ifndef INITFANSTATE_H
#define INITFANSTATE_H

#include "fancontext.h"

class InitFanState : public FanState
{
private:
    int sensorValue;

public:
    virtual void Handle1() override;
    virtual void Handle2() override;

    //FUNCTIE MAKEN IN CPP FILE

    //HIer moeten wellicht ook al verwijzingen naar objecten worden meegegeven
    //virtual void E_START(Sensor *tempsensor) override;

    int *myFunction();

    virtual int *E_START() override;
//    virtual void E_RUN() override;
//    virtual void E_STOP() override;
//    virtual void E_ERROR() override;
//    virtual void E_FIXED() override;

    virtual ~InitFanState();
};

#endif // INITFANSTATE_H
