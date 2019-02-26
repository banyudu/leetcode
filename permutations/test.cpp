#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(
        sln.permute({1, 2, 3}),
        {{1, 2, 3},
         {1, 3, 2},
         {2, 1, 3},
         {2, 3, 1},
         {3, 1, 2},
         {3, 2, 1}}));

    REQUIRE(Utils::isEqual(
        sln.permute({1, 2}),
        {{1, 2},
         {2, 1}}));

    REQUIRE(Utils::isEqual(
        sln.permute({1}),
        {{1}}));

    REQUIRE(Utils::isEqual(
        sln.permute({}),
        {{}}));
}
