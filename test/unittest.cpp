#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../3rdparty/catch/catch.hpp"
#include <iostream>

double test(double testnumber)
{

    int result = testnumber;

    result -= testnumber;

    return result;
}




TEST_CASE("test", "indicator")
{
    REQUIRE(test(15.0) == 0);
    REQUIRE(test(9.0) == 0);
    REQUIRE(test(11.0) == 0);
}
