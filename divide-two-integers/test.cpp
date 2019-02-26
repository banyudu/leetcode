#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.divide(10, 3) == 3);
    REQUIRE(sln.divide(-7, -3) == 2);
    REQUIRE(sln.divide(-7, 3) == -2);
    REQUIRE(sln.divide(-7, 0) == 0);
    REQUIRE(sln.divide(0, 100) == 0);
    REQUIRE(sln.divide(-2147483648, -2147483648) == 1);
    REQUIRE(sln.divide(-2147483648, 1) == -2147483648);
    REQUIRE(sln.divide(-2147483648, -1) == 2147483647);
}
