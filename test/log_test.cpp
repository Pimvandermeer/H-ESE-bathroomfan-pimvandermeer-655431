#include "../3rdparty/catch/catch.hpp"
#include "../bathroomfancmake/logmanager.h"
#include <sys/stat.h>

#define BATHROOM_STATE "bathroom_state"
#define BATHROOM_SENSOR "bathroom_sensor"

bool IsPathExist(const std::string &s)
{
  struct stat buffer;
  return (stat (s.c_str(), &buffer) == 0);
}

//Test if the logmanager is working and if it creates a folder and file when initiated
//and test if a poijnter to write to is initialised

TEST_CASE("log test")
{
    GIVEN("The log manager is initiated")
    {
        LogManager logger;
        THEN(" Test is the log folder is not created yet.") {

               REQUIRE_FALSE(IsPathExist("../logs"));
        }
         logger.initialize();
        THEN("When the logger is initiated the folder should exist")
        {
            REQUIRE(IsPathExist("../logs"));
        }

        THEN("Pointer to write with spd log should exist")
        {
            REQUIRE(spdlog::get(BATHROOM_STATE) != nullptr);
            REQUIRE(spdlog::get(BATHROOM_SENSOR) != nullptr);
        }
        logger.shutdown();
    }
}
