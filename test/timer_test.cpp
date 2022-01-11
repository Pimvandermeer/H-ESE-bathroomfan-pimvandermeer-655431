#define private public
#include "../3rdparty/catch/catch.hpp"
#include "../bathroomfan/timer.h"

TEST_CASE("Timer-class-test")
{
    GIVEN("Timer object is initialised")
    {
        Timer *timer = new Timer(0);
        THEN("Timer should have a delay")
        {
            // PRIVATE VARIABLE
            REQUIRE(timer->setDelay_ == 0);
            REQUIRE(std::is_same<decltype(timer->setDelay_), int>::value);
        }
        WHEN("timer delay is set to 2000")
        {
            timer->displayDelay(2000);
            REQUIRE(timer->setDelay_ == 0);
        }
        delete timer;
    }
}
