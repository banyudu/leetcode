#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(
        sln.permuteUnique({1, 1, 2}),
        {{1, 1, 2},
         {1, 2, 1},
         {2, 1, 1}}));

    REQUIRE(Utils::isEqual(
        sln.permuteUnique({1, 1, 2, 2}),
        {
            {1, 1, 2, 2},
            {1, 2, 1, 2},
            {1, 2, 2, 1},
            {2, 1, 2, 1},
            {2, 2, 1, 1},
            {2, 1, 1, 2},
        }));

    REQUIRE(Utils::isEqual(
        sln.permuteUnique({1, 1}),
        {{1, 1}}));

    REQUIRE(Utils::isEqual(
        sln.permuteUnique({1}),
        {{1}}));

    REQUIRE(Utils::isEqual(
        sln.permuteUnique({}),
        {{}}));
}
