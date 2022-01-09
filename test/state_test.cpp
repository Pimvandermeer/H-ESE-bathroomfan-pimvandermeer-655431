#define private public    //Makes private functions available
#include "../3rdparty/catch/catch.hpp"

////Met deze test wil ik de verschille states de juiste objecten aanmaakt
//TEST_CASE("State test", "test")
//{

//    SECTION("Init fan state"){
//        GIVEN ("init state is initialised") {
//            InitFanState *state = new InitFanState();
//            Sensor *temp = state->getTempSensor();

//            REQUIRE(temp->getName().empty());

//            delete temp;
//            delete state;
//        }
//    }
//}

TEST_CASE("test", "test")
{
    REQUIRE(1 == 1);
}
