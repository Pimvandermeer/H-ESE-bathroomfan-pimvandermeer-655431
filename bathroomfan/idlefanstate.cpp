#include "idlefanstate.h"


IdleFanState::~IdleFanState()
{
     std::cout << " Destructor IdleFanstate" << std::endl;
}

void IdleFanState::Handle1()
{

    size_t size;

    std::cout << " Put Something in here" << std::endl;
    std::cin >> size;
    std::cout << " You filled in " << size << std::endl;


    std::cout << "IdleFanState handles request1.\n";
    std::cout << "IdleFanState wants to change the state of the context.\n";

    this->fancontext_->TransitionTo(new RunFanState);

}

void IdleFanState::Handle2()
{
     std::cout << "IdleFanState handles request2.\n";
}
