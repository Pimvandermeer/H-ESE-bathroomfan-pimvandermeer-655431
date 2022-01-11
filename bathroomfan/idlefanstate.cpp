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

bool IdleFanState::checkIfLimitReached(calcBehaviour::calc_e *calcBehaviour, double *limit)
{
    switch (*calcBehaviour)
    {
    case calcBehaviour::CALCULATE_TEMP:
        if (*limit >= tempLimit_)
        {
            STATE_INFO(" SIMULATION The temperature value is too high so I will go to running state");
            return true;
        }
        return false;
        break;
    case calcBehaviour::CALCULATE_HUM:
        if (*limit >= humLimit_)
        {
            STATE_INFO(" SIMULATION The humidity value is too high so I will go to running state");
            return true;
        }
        return false;
        break;
    case calcBehaviour::CALCULATE_PROX:
        if (*limit >= proxLimit_)
        {
            STATE_INFO("SIMULATION The proximity value is high so someone enterd the toilet and fan needs to go running");
            return true;
        }
        return false;
        break;
    default:
        SENS_ERROR("This should not have happend");
        break;
    }
    return false;
}

void IdleFanState::E_START()
{
    STATE_TRACE("IdleFanState recieved e_run command");

    tempSensor_->sense(tempSensor_->getSensBehaviour());
    humSensor_->sense(humSensor_->getSensBehaviour());
    proxSensor_->sense(proxSensor_->getSensBehaviour());

    bool tempCheck = checkIfLimitReached(tempSensor_->getCalcBehaviour(), tempSensor_->getCalculatedValue());
    bool humCheck = checkIfLimitReached(humSensor_->getCalcBehaviour(), humSensor_->getCalculatedValue());
    bool proxCheck = checkIfLimitReached(proxSensor_->getCalcBehaviour(), proxSensor_->getCalculatedValue());

    if (tempCheck || humCheck || proxCheck)
    {
        this->fanContext_->TransitionTo(new RunFanState());
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
