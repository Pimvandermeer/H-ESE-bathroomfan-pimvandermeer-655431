#include "runfanstate.h"

RunFanState::RunFanState(std::string exceedSensorName, double &exceedValue)
    : exceedSensorName_{exceedSensorName}, exceedValue_{&exceedValue}
{
}

RunFanState::~RunFanState()
{
    delete this->timer_;
    delete this->relay_;
    STATE_TRACE("RunFanState has been destructed");
}

void RunFanState::E_CONFIG()
{
    // Error because runstate should not recieve this
    STATE_ERROR("RunFanState recieved e_config command");
}

void RunFanState::E_START()
{
    // Error because runstate should not recieve this
    STATE_ERROR("RunFanState recieved e_start command");
}

void RunFanState::E_RUN()
{
    STATE_TRACE("RunFanState recieved e_run command");
    STATE_INFO("--SIMULATION RunFanState needs to run for {}", *fanContext_->getMinutesToRun());

    this->timer_->displayDelay(1000);
    this->relay_->turnOn();
    this->timer_->displayDelay(3000);
    this->relay_->turnOff();
}

void RunFanState::E_STOP()
{
    STATE_ERROR("RunFanState recieved e_stop command");
}

void RunFanState::E_ERROR()
{
    // Error because runstate should not recieve this
    STATE_ERROR("RunFanState recieved e_error command");
}

void RunFanState::E_FIXED()
{
    // Error because runstate should not recieve this
    STATE_ERROR("RunFanState recieved e_fixed command");
}
