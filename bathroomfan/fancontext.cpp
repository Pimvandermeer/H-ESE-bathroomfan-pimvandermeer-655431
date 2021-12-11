#include "fancontext.h"

FanContext::FanContext(FanState *fanstate) : fanstate_(nullptr)
{
    this->TransitionTo(fanstate);
}

FanContext::~FanContext()
{
    delete fanstate_;
    std::cout << " Destructor Context" << std::endl;
}

void FanContext::TransitionTo(FanState *fanstate)
{
    std::cout << " Context: Transtition to " << typeid(*fanstate).name() << std::endl;
    if (this->fanstate_ != nullptr)
    {
        delete this->fanstate_;
    }
    this->fanstate_ = fanstate;
    this->fanstate_->set_context(this);
}

void FanContext::Request1()
{
    this->fanstate_->Handle1();
}

void FanContext::Request2()
{
    this->fanstate_->Handle2();
}

void FanContext::Start()
{
    value = this->fanstate_->E_START();
}

int FanContext::getValue()
{
    return *value;
}

FanState *FanContext::getFanState()
{
    return this->fanstate_;
}
