#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.countPrimes(10) == 4);
    REQUIRE(sln.countPrimes(0) == 0);
    REQUIRE(sln.countPrimes(1) == 0);
    REQUIRE(sln.countPrimes(2) == 0);
    REQUIRE(sln.countPrimes(3) == 1);
}
