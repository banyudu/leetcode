#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.firstMissingPositive({1, 2, 0}) == 3);
    REQUIRE(sln.firstMissingPositive({3, 4, -1, 1}) == 2);
    REQUIRE(sln.firstMissingPositive({7, 8, 9, 11, 12}) == 1);
}
