#include "relay.h"

Relay::Relay(bool status)
    : status_{status}
{
}

Relay::~Relay()
{
    SENS_INFO("Relay has been bestructed");
}

void Relay::turnOn()
{
    SENS_INFO("The Bathroomfan is now Running");
    status_ = true;
}

void Relay::turnOff()
{
    SENS_INFO("The Bathroomfan is now stopped");
    status_ = false;
}
