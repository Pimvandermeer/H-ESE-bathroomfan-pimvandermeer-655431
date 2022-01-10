#ifndef IDLEFANSTATE_H
#define IDLEFANSTATE_H

#include "fancontext.h"


class IdleFanState : public FanState
{
private:
    Sensor *tempSensor_ = NULL;
    Sensor *humSensor_ = NULL;
    Sensor *proxSensor_ = NULL;

    double tempLimit_ = 1433;
    double humLimit_ = 397;
    double proxLimit_ = 2000;

public:
    IdleFanState(Sensor &tempSensor, Sensor &humSensor, Sensor &proxSensor);

    virtual bool checkIfLimitReached(calcBehaviour::calc_e *calcBehaviour, double *limit);

    virtual void E_CONFIG() override;
    virtual void E_START() override;
    virtual void E_RUN() override;
    virtual void E_STOP() override;
    virtual void E_ERROR() override;
    virtual void E_FIXED() override;


    virtual ~IdleFanState();
};

#endif // IDLEFANSTATE_H
