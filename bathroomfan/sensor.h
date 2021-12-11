#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include "sensebehaviour.h"
#include "calcbehaviour.h"

class Sensor
{
private:
    std::string sensorName_;
    senseBehaviour sense_;
    calcBehaviour calc_;

public:
    Sensor(std::string nameVal = "None");


    void setName(std::string nameValue);
    std::string getName();

    void senseTemp();
    void senseHum();


    ~Sensor();
};

#endif // SENSOR_H
