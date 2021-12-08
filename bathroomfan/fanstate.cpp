#include "fanstate.h"

FanState::~FanState()
{
    std::cout << "Fan state destructed" << std::endl;
}

void FanState::set_context(FanContext *fancontext)
{
    this->fancontext_ = fancontext;
}

void FanState::Handle1()
{
    std::cout << " fan state function" << std::endl;
}

void FanState::Handle2()
{
    std::cout << " fan state function" << std::endl;
}
