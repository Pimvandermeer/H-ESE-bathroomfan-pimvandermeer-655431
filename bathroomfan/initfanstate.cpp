#include "initfanstate.h"

InitFanState::~InitFanState()
{
    std::cout << "Destructor InitFanState" << std::endl;
}

void InitFanState::Handle1()
{
    std::cout << "The Fan State has been initialed" << std::endl;
    this->fancontext_->TransitionTo(new IdleFanState);
}

void InitFanState::Handle2()
{
    std::cout << " Init state handles other function" << std::endl;
}
