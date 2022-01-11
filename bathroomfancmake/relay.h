#ifndef RELAY_H
#define RELAY_H

#include <iostream>
#include "log.h"

/*This class is the class which finally turns the bathroomfan on
 * for now it only displays "i am turned on or off"
 * it is used in the runfanstate
 */

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
