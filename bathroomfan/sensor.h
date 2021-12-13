#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include "sensebehaviour.h"
#include "calcbehaviour.h"

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
           calcBehaviour::calc_e calcBehaviour = calcBehaviour::CALULATE_DEFAULT
           );

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
