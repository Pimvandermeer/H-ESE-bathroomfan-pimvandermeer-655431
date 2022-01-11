#define private public    //Makes private functions available
#include "../3rdparty/catch/catch.hpp"
#include "../bathroomfancmake/fancontext.h"

////Met deze test wil ik de verschille states de juiste objecten aanmaakt
///
///
TEST_CASE("init-state-test", "test")
{

    SECTION("Init fan state"){
        GIVEN ("init state is initialised") {
            InitFanState *initstate = new InitFanState();
            THEN("Init should have made 3 sensors")
            {
               REQUIRE(initstate->humSensor_ != nullptr);
               REQUIRE(initstate->tempSensor_ != nullptr);
               REQUIRE(initstate->proxSensor_ != nullptr);
            }
          delete initstate;
        }
    }
}

TEST_CASE("Idle-state-test")
{
    SECTION("Idle state")
    {
        WHEN("Idle state is initialised")
        {
            Sensor *tempSensor = new Sensor("Temperature Sensor", senseBehaviour::SENSE_TEMP , calcBehaviour::CALCULATE_TEMP);
            Sensor *humSensor = new Sensor("Temperature Sensor", senseBehaviour::SENSE_HUM , calcBehaviour::CALCULATE_HUM);
            Sensor *proxSensor = new Sensor("Prox Sensor", senseBehaviour::SENSE_PROX , calcBehaviour::CALCULATE_PROX);
            IdleFanState *idlestate = new IdleFanState(*tempSensor, *humSensor, *proxSensor);

            THEN("Limits should be checked")
            {
                REQUIRE(idlestate->tempLimit_ == 1433);
                REQUIRE(idlestate->humLimit_ == 397);
                REQUIRE(idlestate->proxLimit_ == 2000);
            }

            THEN("Function limit is reached should be checked")
            {
                double value = tempSensor->sensor_->createRandomNumber(tempSensor->sensor_->lowTemp, tempSensor->sensor_->highTemp);
                REQUIRE(value > tempSensor->sensor_->lowTemp);
                REQUIRE(value < tempSensor->sensor_->highTemp);
                if (value > idlestate->tempLimit_)
                {
                    REQUIRE(idlestate->checkIfLimitReached(tempSensor->getCalcBehaviour(),  &value));
                } else
                {
                    REQUIRE_FALSE(idlestate->checkIfLimitReached(tempSensor->getCalcBehaviour(),  &value));
                }
            }

            THEN("Function limit is reached should be checked")
            {
                double value = humSensor->sensor_->createRandomNumber(humSensor->sensor_->lowHum, humSensor->sensor_->highHum);
                REQUIRE(value > humSensor->sensor_->lowHum);
                REQUIRE(value < humSensor->sensor_->highHum);
                if (value > idlestate->humLimit_)
                {
                    REQUIRE(idlestate->checkIfLimitReached(humSensor->getCalcBehaviour(),  &value));
                } else
                {
                    REQUIRE_FALSE(idlestate->checkIfLimitReached(humSensor->getCalcBehaviour(),  &value));
                }
            }

            THEN("Function limit is reached should be checked")
            {
                double value = proxSensor->sensor_->createRandomNumber(proxSensor->sensor_->lowProx, proxSensor->sensor_->highProx);
                REQUIRE(value > proxSensor->sensor_->lowProx);
                REQUIRE(value < proxSensor->sensor_->highProx);
                if (value > idlestate->proxLimit_)
                {
                    REQUIRE(idlestate->checkIfLimitReached(proxSensor->getCalcBehaviour(),  &value));
                } else
                {
                    REQUIRE_FALSE(idlestate->checkIfLimitReached(proxSensor->getCalcBehaviour(),  &value));
                }
            }
            delete idlestate;
        }
    }
}

TEST_CASE("run-fan-state")
{
    SECTION("Run fan state")
    {
        GIVEN("run fan state is initialised")

        {
            RunFanState *runfanstate = new RunFanState();
            THEN("Run fan state should have timer and relay")
            {
                REQUIRE(runfanstate->timer_ != nullptr);
                REQUIRE(runfanstate->relay_ != nullptr);
            }
            delete runfanstate;
        }
    }
}
