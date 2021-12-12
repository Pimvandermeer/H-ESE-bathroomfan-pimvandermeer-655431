#include "sensor.h"

Sensor::Sensor(std::string nameVal, senseBehaviour::sense_e sensBehaviour, calcBehaviour::calc_e calcbehaviour)
    : sensorName_{nameVal}, sensorBehaviour_{sensBehaviour}, calculateBehaviour_{calcbehaviour}
{
}

Sensor::~Sensor()
{
     std::cout << "Destructor called for" << sensorName_ << std::endl;
}

void Sensor::sense(senseBehaviour::sense_e *enumValue)
{
    sensedValue_ = this->sensor_->sense(enumValue);
    calculatedValue_ = this->calculator_->calculate(&calculateBehaviour_, &sensedValue_);
}

senseBehaviour::sense_e *Sensor::getSensBehaviour()
{
    return &sensorBehaviour_;
}

int *Sensor::getSensedValue()
{
    return &sensedValue_;
}

void Sensor::calc(calcBehaviour::calc_e *EnumValue, int *calcValue)
{
    calculatedValue_ = this->calculator_->calculate(EnumValue, calcValue);
}

calcBehaviour::calc_e *Sensor::getCalcBehaviour()
{
    return &calculateBehaviour_;
}

int *Sensor::getCalculatedValue()
{
    return &calculatedValue_;
}

std::string Sensor::getName()
{
    return sensorName_;
}

