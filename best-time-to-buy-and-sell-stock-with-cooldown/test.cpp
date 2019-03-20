#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.maxProfit({1,2,3,0,2}) == 3);
    REQUIRE(sln.maxProfit({1,2,4}) == 3);
    REQUIRE(sln.maxProfit({6,1,6,4,3,0,2}) == 7);
    REQUIRE(sln.maxProfit({6,1,3,2,4,7}) == 6);
}
