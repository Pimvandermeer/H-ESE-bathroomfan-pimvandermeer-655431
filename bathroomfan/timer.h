#ifndef TIMER_H
#define TIMER_H

#include <time.h>
#include <stdio.h>


class Timer
{
private:
    int setDelay_;

public:
    Timer(int delay = 0);
    ~Timer();
    void displayDelay(int number_of_seconds);
};

#endif // TIMER_H
