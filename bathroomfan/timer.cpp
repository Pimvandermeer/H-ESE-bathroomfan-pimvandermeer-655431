#include "timer.h"

Timer::Timer(int delay)
    : setDelay_{delay}
{
    SENS_TRACE("Timer has been contructed");
}

Timer::~Timer()
{
    SENS_TRACE("Timer has been destructed");
}

void Timer::displayDelay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
    // Storing start time
    clock_t start_time = clock();
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
};

int Timer::getDelay()
{
    return setDelay_;
}
