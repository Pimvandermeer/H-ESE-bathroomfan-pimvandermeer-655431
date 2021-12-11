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

int* FanState::E_START()
{
    std::cout << "Fan states e_start function" << std::endl;
}

void FanState::E_RUN()
{
    std::cout << "Fan states e_run function" << std::endl;
}

void FanState::E_STOP()
{
    std::cout << "Fan states e_stop function" << std::endl;
}

void FanState::E_ERROR()
{
    std::cout << "Fan states e_error function" << std::endl;
}

void FanState::E_FIXED()
{
    std::cout << "Fan states e_fixed function" << std::endl;
}

