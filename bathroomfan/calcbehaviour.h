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

    virtual int calculate(calc_e *enumValue, int *value);
};

#endif // CALCBEHAVIOUR_H
