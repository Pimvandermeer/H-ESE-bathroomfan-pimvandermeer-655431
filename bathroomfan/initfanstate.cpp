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


int *InitFanState::E_START()
{
    int *p = 0;

    p = myFunction();

    std::cout << " Init FanState initialiase with a value: " << *p << std::endl;

    this->fancontext_->TransitionTo(new IdleFanState);


    return p;
}

int *InitFanState::myFunction()
{
    static int number {0};

    std::cout << " Put Something in here myFunction" << std::endl;
    std::cin >> number;

    std::cout << " You filled in " << number << std::endl;

    sensorValue = number;

    return &number;
}
