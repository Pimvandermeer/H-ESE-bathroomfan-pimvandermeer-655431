#include "idlefanstate.h"

IdleFanState::IdleFanState(Sensor &tempSensor, Sensor &humSensor)
    : tempSensor_{&tempSensor}, humSensor_{&humSensor}
{
  //  this->tempSensor_ = &tempSensor;   Mag ook
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

    tempSensor_->sense(tempSensor_->getSensBehaviour());

    if (*tempSensor_->getCalculatedValue() >= 174)
    {
        Display::DSPshow(4, "The value is higher so I will go to running state");
        this->fanContext_->TransitionTo(new RunFanState);
        fanContext_->Stop();
    }

    //tempSensor_->calc(tempSensor_->getCalcBehaviour(), tempSensor_->getSensedValue());

  //  std::cout << tempSensor_->getName() << std::endl;
  //  std::cout << "From idle is this the calulated value" << *tempSensor_->getCalculatedValue() << std::endl;



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

