#include "errorfanstate.h"

ErrorFanState::~ErrorFanState()
{
    std::cout << " Destructor ErrorFanstate" << std::endl;
}

//void ErrorFanState::Handle1()
//{
//    std::cout << " Error State has been encountered ohh no...." << std::endl;
//    this->fanContext_->TransitionTo(new InitFanState);
//}

//void ErrorFanState::Handle2()
//{
//    std::cout << " Error state handles function" << std::endl;
//}
