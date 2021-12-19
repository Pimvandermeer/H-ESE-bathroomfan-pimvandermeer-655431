#include "idlefanstate.h"

IdleFanState::IdleFanState(Sensor &tempSensor, Sensor &humSensor)
    : tempSensor_{&tempSensor}, humSensor_{&humSensor}
{
    STATE_INFO("Idle Fan State has been initialised and recieved the following objects: {}, {}", tempSensor_->getName(), humSensor_->getName());
}

IdleFanState::~IdleFanState()
{
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

    if (*tempSensor_->getCalculatedValue() >= 174)
    {
        STATE_INFO(" SIMULATION The temperature value is higher so I will go to running state");
        this->fanContext_->TransitionTo(new RunFanState(tempSensor_->getName(), *tempSensor_->getCalculatedValue()));
       // fanContext_->Stop();
    };

    if(*humSensor_->getCalculatedValue() >= 397)
    {
        STATE_INFO(" SIMULATION The humidity value is higher so I will go to running state");
        this->fanContext_->TransitionTo(new RunFanState(tempSensor_->getName(), *tempSensor_->getCalculatedValue()));
       // fanContext_->Stop();
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
