#include "initfanstate.h"

InitFanState::~InitFanState()
{
    STATE_TRACE("Initfanstate has been destructed");
}

void InitFanState::E_CONFIG()
{
    Devconsole::DCSinitialise();

    STATE_TRACE("InitFanstate recieved e_start command");

    STATE_INFO("InitFanstate has now 2 senors initialised with the name {}, {}", this->tempSensor_->getName(), this->humSensor_->getName());

    this->fanContext_->TransitionTo(new IdleFanState(*tempSensor_, *humSensor_));
}

void InitFanState::E_START()
{
    // Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_start command");
}

void InitFanState::E_RUN()
{
    // Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_run command");
}

void InitFanState::E_STOP()
{
    // Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_stop command");
}

void InitFanState::E_ERROR()
{
    // Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_error command");
}

void InitFanState::E_FIXED()
{
    // Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_fixed command");
}
