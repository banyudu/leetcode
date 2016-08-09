#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.letterCombinations("").empty());
    REQUIRE(sln.letterCombinations("0").empty());
    REQUIRE(sln.letterCombinations("1").empty());
}
