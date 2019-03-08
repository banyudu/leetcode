#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.maxProfit({7,1,5,3,6,4}) == 7);
    REQUIRE(sln.maxProfit({1,2,3,4,5}) == 4);
    REQUIRE(sln.maxProfit({7,6,4,3,1}) == 0);
}
