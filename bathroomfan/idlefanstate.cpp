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

void IdleFanState::E_START()
{
    // Error because idle should not recieve this
    STATE_ERROR("IdleFanState recieved e_start command");
}

void IdleFanState::E_RUN()
{
    STATE_TRACE("IdleFanState recieved e_run command");

    tempSensor_->sense(tempSensor_->getSensBehaviour());

    if (*tempSensor_->getCalculatedValue() >= 174)
    {
        STATE_INFO(" SIMULATION The value is higher so I will go to running state");
        this->fanContext_->TransitionTo(new RunFanState);
        fanContext_->Stop();
    }

    // tempSensor_->calc(tempSensor_->getCalcBehaviour(), tempSensor_->getSensedValue());

    //  std::cout << tempSensor_->getName() << std::endl;
    //  std::cout << "From idle is this the calulated value" << *tempSensor_->getCalculatedValue() << std::endl;
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
