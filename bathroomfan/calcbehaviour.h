#ifndef CALCBEHAVIOUR_H
#define CALCBEHAVIOUR_H

#include "log.h"

/*Sensors are made in a strattegy patteren
 * this way a sensor can have a certain calculatebehaviour
 * but it doesn't have too.
 * It keeps the inhertance at a low level and uses polymorphism
 *
 * at the moment there are 3 behaviours
 * temp, hum, proximity
 */

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