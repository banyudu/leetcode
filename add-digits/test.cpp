#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.addDigits(18) == 9);
    REQUIRE(sln.addDigits(456) == 6);
    REQUIRE(sln.addDigits(1) == 1);
    REQUIRE(sln.addDigits(0) == 0);
}
