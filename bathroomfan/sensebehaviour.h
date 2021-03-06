#ifndef SENSEBEHAVIOUR_H
#define SENSEBEHAVIOUR_H

#include <iostream>
#include <random>
#include <iomanip>

#include "logmanager.h"


/*Sensors are made in a strattegy patteren
 * this way a sensor can have a certain sensebehaviour
 * but it doesn't have too.
 * It keeps the inhertance at a low level and uses polymorphism
 *
 * at the moment there are 3 behaviours
 * temp, hum, proximity
 */

class senseBehaviour
{
private:
    double lowTemp = -20;  //lowest possible temp to read
    double highTemp = 80;  //highest possible temp to read

    double lowHum = 0;      //lowest possible hum to read
    double highHum = 96;    //highest possible hum to read

    int lowProx = 0;  //PS_THDL_L
    int highProx = 4096;   //_PS_THDL_L

public:
    typedef enum
    {
        SENSE_TEMP,
        SENSE_HUM,
        SENSE_PROX,
        SENSE_DEFAULT
    } sense_e;

    virtual double sense(sense_e *enumValue);
    virtual double createRandomNumber(double lowerBound, double higherBound);
    virtual int createRandomNumber(int lowerBound, int higherBound);

};

#endif // SENSEBEHAVIOUR_H
