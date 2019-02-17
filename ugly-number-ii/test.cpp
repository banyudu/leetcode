#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.nthUglyNumber(10) == 12);
    REQUIRE(sln.nthUglyNumber(1) == 1);
}
