#ifndef RELAY_H
#define RELAY_H

#include <iostream>
#include "log.h"

class Relay
{
private:
    bool status_;

public:
    Relay(bool status);
    ~Relay();

    void turnOn();
    void turnOff();
};

#endif // RELAY_H
