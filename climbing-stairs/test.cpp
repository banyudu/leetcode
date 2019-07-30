#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.climbStairs(1) == 1);
    REQUIRE(sln.climbStairs(2) == 2);
    REQUIRE(sln.climbStairs(3) == 3);
    REQUIRE(sln.climbStairs(4) == 5);
    REQUIRE(sln.climbStairs(5) == 8);
    REQUIRE(sln.climbStairs(6) == 13);
}
