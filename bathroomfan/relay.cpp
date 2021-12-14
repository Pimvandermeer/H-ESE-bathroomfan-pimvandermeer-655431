#include "relay.h"

Relay::Relay(bool status)
    : status_{status}
{
}

Relay::~Relay()
{
    SENS_TRACE("Relay has been bestructed");
}

void Relay::turnOn()
{
    SENS_INFO("--SIMULATION The Bathroomfan is now Running");
    status_ = true;
}

void Relay::turnOff()
{
    SENS_INFO("--SIMULATION The Bathroomfan is now stopped");
    status_ = false;
}
