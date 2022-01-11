#ifndef TIMER_H
#define TIMER_H

#include <time.h>
#include <stdio.h>
#include "log.h"

/*
 * This class is made to have delay in the terminal visualization
 * so it is only used for user ecperience
 */

class Timer
{
private:
    int setDelay_;

public:
    Timer(int delay = 0);
    ~Timer();
    void displayDelay(int number_of_seconds);

    int getDelay();
};

#endif // TIMER_H
