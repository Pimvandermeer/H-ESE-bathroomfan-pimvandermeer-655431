#include "initfanstate.h"

InitFanState::~InitFanState()
{
    std::cout << "Destructor InitFanState" << std::endl;
}

//int *InitFanState::E_START()
//{
//    int *p = 0;
//    p = myFunction();
//    std::cout << " Init FanState initialiase with a value: " << *p << std::endl;
//    this->fancontext_->TransitionTo(new IdleFanState(*tempSensor));
//    return p;
//}

//int *InitFanState::myFunction()
//{
//    static int number {0};

//    Display::DSPshow(2, "Put Something in here myFunction");

//    std::cin >> number;

//    std::cout << " You filled in " << number << std::endl;

//   // sensorValue = number;

//    return &number;
//}


void InitFanState::E_START()
{
    Display::DSPinitialise();
    Devconsole::DCSinitialise();

    Display::DSPshow(2, "InitFanstat is started");

    Devconsole::DCSsimulationSystemInfo("We are at start These sensors have been initialiazed\n");

    std::cout << this->tempSensor_->getName() << std::endl;
    std::cout << this->humSensor_->getName() << std::endl;

    this->fanContext_->TransitionTo(new IdleFanState(*tempSensor_, *humSensor_));
}

void InitFanState::E_RUN()
{
    Display::DSPshow(2, "InitFanStat is running");
}

void InitFanState::E_STOP()
{
    Display::DSPshow(2, "InitFanStat is stopped");
}

void InitFanState::E_ERROR()
{
    Display::DSPshow(2, "InitFanStat is errored");
}

void InitFanState::E_FIXED()
{
    Display::DSPshow(2, "InitFanStat is fixed");
}



