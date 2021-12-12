#include "fancontext.h"

FanContext::FanContext(FanState *fanstate) : fanState_(nullptr)
{
    this->TransitionTo(fanstate);
}

FanContext::~FanContext()
{
    delete fanState_;
    std::cout << " Destructor Context" << std::endl;
}

void FanContext::TransitionTo(FanState *fanstate)
{
    std::cout << " Context: Transtition to " << typeid(*fanstate).name() << std::endl;
    if (this->fanState_ != nullptr)
    {
        delete this->fanState_;
    }
    this->fanState_ = fanstate;
    this->fanState_->setContext(this);
}

//void FanContext::adNumStates()
//{
//    numStates++;
//}

//void FanContext::delNumStates()
//{
//    numStates--;
//}

void FanContext::Start()
{
    this->fanState_->E_START();
}

void FanContext::Run()
{
    this->fanState_->E_RUN();
}

void FanContext::Stop()
{
    this->fanState_->E_STOP();
}

void FanContext::Error()
{
    this->fanState_->E_ERROR();
}

void FanContext::Fixed()
{
    this->fanState_->E_FIXED();
}

