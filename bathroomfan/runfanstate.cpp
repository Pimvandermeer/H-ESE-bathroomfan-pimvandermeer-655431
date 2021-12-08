#include "runfanstate.h"

RunFanState::~RunFanState()
{
    std::cout << " Destructor RunFanStae" << std::endl;
}

void RunFanState::Handle1()
{
    std::cout << "RunFanState handles request1." << std::endl;
}

void RunFanState::Handle2()
{
    std::cout << "RunFanState handles request2." << std::endl;

    std::cout << "FunFanState wants to change the state of the context.\n";

    this->fancontext_->TransitionTo(new IdleFanState);

}
