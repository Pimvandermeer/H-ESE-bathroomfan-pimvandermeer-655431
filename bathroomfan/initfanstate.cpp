#include "initfanstate.h"

InitFanState::~InitFanState()
{
    STATE_TRACE("Initfanstate has been destructed");
}

Sensor *InitFanState::getTempSensor()
{
    return tempSensor_;
}

void InitFanState::E_CONFIG()
{
    STATE_TRACE("InitFanstate recieved e_start command");

    STATE_INFO("InitFanstate has now 3 senors initialised with the name {}, {}, {}", this->tempSensor_->getName(), this->humSensor_->getName(), this->proxSensor_->getName());

    this->fanContext_->TransitionTo(new IdleFanState(*tempSensor_, *humSensor_, *proxSensor_));
}

void InitFanState::E_START()
{
    // Error because init should not recieve this
    STATE_ERROR("InitFanstate recieved e_start command");
}

void InitFanState::E_RUN()
{
    // Error because init should not recieve this!
    STATE_ERROR("InitFanstate recieved e_run command");
}

void InitFanState::E_STOP()
{
    // Error because init should not recieve this!
    STATE_ERROR("InitFanstate recieved e_stop command");
}

void InitFanState::E_ERROR()
{
    // Error because init should not  recieve this!
    STATE_ERROR("InitFanstate recieved e_error command");
}

void InitFanState::E_FIXED()
{
    // Error because init should not recieve this
    STATE_ERROR("InitFanstate recieved e_fixed command");
}