#include "runfanstate.h"

RunFanState::~RunFanState()
{
    delete this->timer_;
    delete this->relay_;
    std::cout << " Destructor RunFanStae" << std::endl;
}

void RunFanState::E_START()
{
    Display::DSPshow(2, "Run FanState is at start");
}

void RunFanState::E_RUN()
{

    Display::DSPshow(2, "Run FanState is at run");
}

void RunFanState::E_STOP()
{
    this->timer_->displayDelay(1000);
    this->relay_->turnOn();
    this-> timer_->displayDelay(3000);
    this->relay_->turnOff();
    Display::DSPshow(2, "Run FanState is at stop");
}

void RunFanState::E_ERROR()
{
    Display::DSPshow(2, "Run FanState is at error");
}

void RunFanState::E_FIXED()
{
    Display::DSPshow(2, "Run FanState is at fixed");
}

