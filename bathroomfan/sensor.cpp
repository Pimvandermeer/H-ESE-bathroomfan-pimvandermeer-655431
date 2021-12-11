#include "sensor.h"

Sensor::Sensor(std::string nameVal)
    : sensorName_{nameVal}
{
}

Sensor::~Sensor()
{
     std::cout << "Destructor called for" << sensorName_ << std::endl;
}

void Sensor::senseTemp()
{
    this->sense_.senseTemperature();
}

void Sensor::senseHum()
{
    this->sense_.senseHumidity();
}

std::string Sensor::getName()
{
    return sensorName_;
}

void Sensor::setName(std::string nameValue)
{
    sensorName_ = nameValue;
}

