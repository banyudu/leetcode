#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"
#include "../utils.hpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.combinationSum({2, 3, 6, 7}, 7), {{2, 2, 3}, {7}}));
}
