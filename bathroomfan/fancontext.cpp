#include "fancontext.h"

FanContext::FanContext(FanState *fanstate) : fanState_(nullptr)
{
    this->TransitionTo(fanstate);
    //  stateLogger_.initialize();
    STATE_TRACE("Fan Context has been initialised");
}

FanContext::~FanContext()
{
    delete fanState_;
    //  stateLogger_.shutdown();
    STATE_TRACE("Destructor Context");
}

void FanContext::TransitionTo(FanState *fanstate)
{
    STATE_INFO(" Context: Transtition to  {}", typeid(*fanstate).name())
    if (this->fanState_ != nullptr)
    {
        delete this->fanState_;
    }
    this->fanState_ = fanstate;
    this->fanState_->setContext(this);
}

// void FanContext::adNumStates()
//{
//     numStates++;
// }

// void FanContext::delNumStates()
//{
//     numStates--;
// }

void FanContext::Start()
{
    STATE_TRACE("Fancontext initiated E_START");
    this->fanState_->E_START();
}

void FanContext::Run()
{
    STATE_TRACE("Fancontext initiated E_RUN");
    this->fanState_->E_RUN();
}

void FanContext::Stop()
{
    STATE_TRACE("Fancontext initiated E_STOP");
    this->fanState_->E_STOP();
}

void FanContext::Error()
{
    STATE_TRACE("Fancontext initiated E_ERROR");
    this->fanState_->E_ERROR();
}

void FanContext::Fixed()
{
    STATE_TRACE("Fancontext initiated E_Fixed");
    this->fanState_->E_FIXED();
}
