#define private public
#include "../3rdparty/catch/catch.hpp"
#include "../bathroomfan/relay.h"


//HIer in ga ik het object relay testen
TEST_CASE("Relay-class-test")
{
    GIVEN("Relay object is initialised")
    {
        Relay *relay = new Relay(false);
        THEN("Relay should have status with initiated value")
        {
            //PRIVATE VARIABLE
            REQUIRE(relay->status_ == false);
            REQUIRE(std::is_same<decltype (relay->status_), bool>::value);
        }
        WHEN ("relay is turned on")
        {
            relay->turnOn();
            THEN("status should be true")
            {
                //PRIVATE VARIABLE
                REQUIRE(relay->status_ == true);
            }
        }
        WHEN("relay is turned off")
        {
            relay->turnOff();
            THEN("relay staus should be false")
            {
                REQUIRE(relay->status_ == false);
            }
        }
    delete relay;
    }
}
