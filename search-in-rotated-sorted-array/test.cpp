#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.search({4,5,6,7,0,1,2}, 0) == 4);
    REQUIRE(sln.search({4,5,6,7,0,1,2}, 5) == 1);
    REQUIRE(sln.search({3,0,1,2}, 1) == 2);
    REQUIRE(sln.search({4,5,6,7,0,1,2}, 3) == -1);
    REQUIRE(sln.search({}, 3) == -1);
    REQUIRE(sln.search({}, 0) == -1);
    REQUIRE(sln.search({3}, 0) == -1);
    REQUIRE(sln.search({0}, 0) == 0);
    REQUIRE(sln.search({4,5,6,7,0,1,2}, 1) == 5);
}
