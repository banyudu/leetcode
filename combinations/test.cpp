#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.combine(4, 2), {
        {2,4},
        {3,4},
        {2,3},
        {1,2},
        {1,3},
        {1,4}
    }));
}
