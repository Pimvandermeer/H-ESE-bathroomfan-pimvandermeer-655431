#ifndef SENSEBEHAVIOUR_H
#define SENSEBEHAVIOUR_H

#include <iostream>
#include "../display/devconsole.h"

class senseBehaviour
{
public:
    typedef enum
    {
        SENSE_TEMP,
        SENSE_HUM,
        SENSE_PROX,
        SENSE_DEFAULT
    } sense_e;

    virtual double sense(sense_e *enumValue);
};

#endif // SENSEBEHAVIOUR_H
