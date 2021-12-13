#include "relay.h"

Relay::Relay(bool status)
    : status_{status}
{
}

Relay::~Relay()
{
    std::cout << "Destructor called for Relay" << std::endl;
}

void Relay::turnOn()
{
    Display::DSPshow(5, "The Fan is now turned on");
    status_ = true;
}

void Relay::turnOff()
{
    Display::DSPshow(5, "The Fan is now turned off");
    status_ = false;
}
