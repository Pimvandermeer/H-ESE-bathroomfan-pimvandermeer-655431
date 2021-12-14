#include "runfanstate.h"

RunFanState::~RunFanState()
{
    delete this->timer_;
    delete this->relay_;
    STATE_INFO("RunFanState has been destructed");
}

void RunFanState::E_START()
{
    //Error because idle should not recieve this
    STATE_ERROR("RunFanState recieved e_start command");
}

void RunFanState::E_RUN()
{
    //Error because idle should not recieve this
    STATE_ERROR("RunFanState recieved e_run command");
}

void RunFanState::E_STOP()
{
    STATE_TRACE("RunFanStae recieved e_stop command");

    this->timer_->displayDelay(1000);
    this->relay_->turnOn();
    this-> timer_->displayDelay(3000);
    this->relay_->turnOff();
}

void RunFanState::E_ERROR()
{
    //Error because idle should not recieve this
    STATE_ERROR("RunFanState recieved e_error command");
}

void RunFanState::E_FIXED()
{
    //Error because idle should not recieve this
    STATE_ERROR("RunFanState recieved e_fixed command");
}

