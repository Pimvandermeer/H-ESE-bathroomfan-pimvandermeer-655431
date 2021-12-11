#include "idlefanstate.h"

IdleFanState::IdleFanState(Sensor &tempSensor)
{
    std::cout << "Idle Fanstate created with " << tempSensor.getName() << std::endl;
    this->tempSensor_ = &tempSensor;
}

IdleFanState::~IdleFanState()
{
     std::cout << " Destructor IdleFanstate" << std::endl;
}

void IdleFanState::E_START()
{
    Display::DSPshow(2, "IdleFanState is at start");
}

void IdleFanState::E_RUN()
{
    Display::DSPshow(2, "IdleFanState is at run");
    Display::DSPshow(3, "Now something must happen");
    Display::DSPshow(4, "The name of the sensor is:");

    tempSensor_->senseTemp();

    std::cout << tempSensor_->getName() << std::endl;


    this->fanContext_->TransitionTo(new RunFanState);
}

void IdleFanState::E_STOP()
{
    Display::DSPshow(2, "IdleFanState is at stop");
}

void IdleFanState::E_ERROR()
{
    Display::DSPshow(2, "IdleFanState is at error");
}

void IdleFanState::E_FIXED()
{
    Display::DSPshow(2, "IdleFanState is at fixed");
}

