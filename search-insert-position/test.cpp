#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.searchInsert({1,3,5,6}, 5) == 2);
    REQUIRE(sln.searchInsert({1,3,5,6}, 2) == 1);
    REQUIRE(sln.searchInsert({1,3,5,6}, 7) == 4);
    REQUIRE(sln.searchInsert({1,3,5,6}, 0) == 0);
}
