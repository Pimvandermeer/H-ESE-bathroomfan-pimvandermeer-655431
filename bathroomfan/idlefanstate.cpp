#include "idlefanstate.h"

IdleFanState::IdleFanState(Sensor &tempSensor, Sensor &humSensor, Sensor &proxSensor)
    : tempSensor_{&tempSensor}, humSensor_{&humSensor}, proxSensor_{&proxSensor}
{
    STATE_INFO("Idle Fan State has been initialised and recieved the following objects: {}, {}, {}", tempSensor_->getName(), humSensor_->getName(), proxSensor_->getName());
}

IdleFanState::~IdleFanState()
{
    delete tempSensor_;
    delete humSensor_;
    delete proxSensor_;
    STATE_TRACE("IdleFanstate has been destructed");
}

void IdleFanState::E_CONFIG()
{
    // Error because idle should not recieve this
    STATE_ERROR("IdleFanState recieved e_config command");
}

void IdleFanState::E_START()
{
    STATE_TRACE("IdleFanState recieved e_run command");

    tempSensor_->sense(tempSensor_->getSensBehaviour());
    humSensor_->sense(humSensor_->getSensBehaviour());
    proxSensor_->sense(proxSensor_->getSensBehaviour());

    if (*tempSensor_->getCalculatedValue() >= 1433)
    {
        STATE_INFO(" SIMULATION The temperature value is too high so I will go to running state");
        this->fanContext_->TransitionTo(new RunFanState(tempSensor_->getName(), *tempSensor_->getCalculatedValue()));
       // fanContext_->Stop();
    }else if(*humSensor_->getCalculatedValue() >= 397)
    {
        STATE_INFO(" SIMULATION The humidity value is too high so I will go to running state");
        this->fanContext_->TransitionTo(new RunFanState(humSensor_->getName(), *humSensor_->getCalculatedValue()));
       // fanContext_->Stop();
    } else if(*proxSensor_->getCalculatedValue() >= 2000)
    {
        STATE_INFO("SIMULATION The proximity value is high so someone enterd the toilet and fan needs to go running");
        this->fanContext_->TransitionTo(new RunFanState(proxSensor_->getName(), *proxSensor_->getCalculatedValue()));
    };
}

void IdleFanState::E_RUN()
{
    // Error because idle should not recieve this
    STATE_ERROR("IdleFanState recieved e_run command");
}

void IdleFanState::E_STOP()
{
    // Error because idle should not recieve this
    STATE_ERROR("IdleFanState recieved e_stop command");
}

void IdleFanState::E_ERROR()
{
    // Error because it should not recieve this
    STATE_ERROR("IdleFanState recieved e_error command");
}

void IdleFanState::E_FIXED()
{
    // Error because it should not recieve this
    STATE_ERROR("IdleFanState recieved e_fixed command");
}
