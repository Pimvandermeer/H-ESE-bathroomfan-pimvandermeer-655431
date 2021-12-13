#ifndef CALCBEHAVIOUR_H
#define CALCBEHAVIOUR_H

#include <iostream>
#include "../display/display.h"

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
};

#endif // CALCBEHAVIOUR_H
