#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"
#include "../utils.hpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.searchRange({5,7,7,8,8,10}, 8), {3, 4}));
    REQUIRE(Utils::isEqual(sln.searchRange({5,7,7,8,10}, 8), {3, 3}));
    REQUIRE(Utils::isEqual(sln.searchRange({5,7,7,10}, 8), {-1, -1}));
}

TEST_CASE("empty values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.searchRange({}, 8), {-1, -1}));
}