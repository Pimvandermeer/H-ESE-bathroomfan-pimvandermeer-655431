#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../3rdparty/catch/catch.hpp"
#include "../bathroomfan/fancontext.h"
#include "../bathroomfan/log.h"
#include "../display/appinfo.h"
#include <iostream>


//Met deze test wil ik kijken of de Sensor juist meten en vervolgens de waarde goed wordt omgerekend
TEST_CASE("SensorTest", "indicator")
{
    SECTION("Temp sensor"){
        GIVEN(" Temp Sensor is initialised") {
               Sensor *tempSensor = new Sensor("Temperature Sensor", senseBehaviour::SENSE_TEMP , calcBehaviour::CALCULATE_TEMP);

               THEN(" The sensed value should be 0") {
                   REQUIRE(*tempSensor->getSensedValue() == 0);
               }
               WHEN(" The sensor has meeting done"){
                   tempSensor->sense(tempSensor->getSensBehaviour());
                   THEN(" The sensed value should between -20 and 80") {
                       REQUIRE(*tempSensor->getSensedValue() > -20);
                       REQUIRE(*tempSensor->getSensedValue() < 80);
                   }
                   AND_THEN("The calculated value should be") {
                       REQUIRE(*tempSensor->getCalculatedValue() > 0);
                       REQUIRE(*tempSensor->getCalculatedValue() < 4096);
                   }
               }
        delete  tempSensor;
        }
    }

    SECTION("Hum sensor"){
        GIVEN(" Hum Sensor is initialised") {
               Sensor *humSensor = new Sensor("Temperature Sensor", senseBehaviour::SENSE_HUM , calcBehaviour::CALCULATE_HUM);

               THEN(" The sensed value should be 0") {
                   REQUIRE(*humSensor->getSensedValue() == 0);
               }
               WHEN(" The sensor has meeting done"){
                   humSensor->sense(humSensor->getSensBehaviour());
                   THEN(" The sensed value should not be  0 and between 0-96") {
                       REQUIRE(*humSensor->getSensedValue() > 0);
                       REQUIRE(*humSensor->getSensedValue() < 96);
                   }
                   AND_THEN("The calculated value should be") {
                       REQUIRE(*humSensor->getCalculatedValue() > 0);
                       REQUIRE(*humSensor->getCalculatedValue() < 4096);
                   }
               }
        delete  humSensor;
        }
    }
}
