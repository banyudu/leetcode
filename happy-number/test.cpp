#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.isHappy(1) == true);
    REQUIRE(sln.isHappy(2) == false);
    REQUIRE(sln.isHappy(19) == true);
    REQUIRE(sln.isHappy(82) == true);
    REQUIRE(sln.isHappy(100) == true);
    REQUIRE(sln.isHappy(0) == false);
    REQUIRE(sln.isHappy(-1) == false);
}
