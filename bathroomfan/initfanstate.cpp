#include "initfanstate.h"

InitFanState::~InitFanState()
{
    STATE_INFO("Initfanstate has been destructed");
}

void InitFanState::E_START()
{
    Devconsole::DCSinitialise();

    STATE_INFO("InitFanstate recieved e_start command");

    STATE_INFO("We have now 2 senors with the name {}, {}",this->tempSensor_->getName(), this->tempSensor_->getName());

    this->fanContext_->TransitionTo(new IdleFanState(*tempSensor_, *humSensor_));
}

void InitFanState::E_RUN()
{
    //Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_run command");
}

void InitFanState::E_STOP()
{
    //Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_stop command");
}

void InitFanState::E_ERROR()
{
    //Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_error command");
}

void InitFanState::E_FIXED()
{
    //Error because idle should not recieve this
    STATE_ERROR("InitFanstate recieved e_fixed command");
}



