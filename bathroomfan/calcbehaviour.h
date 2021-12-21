#ifndef CALCBEHAVIOUR_H
#define CALCBEHAVIOUR_H

#include "log.h"

class calcBehaviour
{
public:
    typedef enum
    {
        CALCULATE_TEMP,
        CALCULATE_HUM,
        CALCULATE_PROX,
        CALULATE_DEFAULT
    } calc_e;

    virtual double calculate(calc_e *enumValue, double *value);
    virtual double round_up(double value, int decimal_places);
};

#endif // CALCBEHAVIOUR_H
