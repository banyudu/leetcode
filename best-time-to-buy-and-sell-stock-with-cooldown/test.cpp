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
    REQUIRE(sln.maxProfit({1,7,2,4,11}) == 13);
    REQUIRE(sln.maxProfit({10,7,2,4,1,2,3,4,5,6,7,8,9,20}) == 20);
}
