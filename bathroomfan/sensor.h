#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include "sensebehaviour.h"
#include "calcbehaviour.h"
#include "logmanager.h"

/*Sensors are made in a strattegy patteren
 * this way a sensor can have a certain sense- and calulatebehaviour
 * but it doesn't have too.
 * It keeps the inhertance at a low level and uses polymorphism
 *
 * a enum is used to keep nice and clean function within the different behaviours
 */

class Sensor
{
private:
    std::string sensorName_;
    senseBehaviour *sensor_ = new senseBehaviour();
    calcBehaviour *calculator_ = new calcBehaviour();

    senseBehaviour::sense_e sensorBehaviour_;
    calcBehaviour::calc_e calculateBehaviour_;

    double calculatedValue_ = 0.0;
    double sensedValue_ = 0.0;

public:
    Sensor(std::string nameVal = "None",
           senseBehaviour::sense_e sensBehaviour = senseBehaviour::SENSE_DEFAULT,
           calcBehaviour::calc_e calcBehaviour = calcBehaviour::CALULATE_DEFAULT);

    std::string getName();

    void sense(senseBehaviour::sense_e *enumValue);
    senseBehaviour::sense_e *getSensBehaviour();
    double *getSensedValue();

    void calc(calcBehaviour::calc_e *enumValue, double *calcValue);
    calcBehaviour::calc_e *getCalcBehaviour();
    double *getCalculatedValue();

    ~Sensor();
};

#endif // SENSOR_H