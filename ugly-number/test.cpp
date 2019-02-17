#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.isUgly(2) == true);
    REQUIRE(sln.isUgly(3) == true);
    REQUIRE(sln.isUgly(5) == true);
    REQUIRE(sln.isUgly(30) == true);
    REQUIRE(sln.isUgly(15) == true);
    REQUIRE(sln.isUgly(6) == true);
    REQUIRE(sln.isUgly(8) == true);
    REQUIRE(sln.isUgly(14) == false);
    REQUIRE(sln.isUgly(-15) == false);
}

TEST_CASE("edge values", "[Solution]")
{
    REQUIRE(sln.isUgly(0) == false);
    REQUIRE(sln.isUgly(-1) == false);
    REQUIRE(sln.isUgly(1) == true);
}
