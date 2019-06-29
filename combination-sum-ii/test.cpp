#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"
#include "../utils.hpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    vector<int> tmp = {10,1,2,7,6,1,5};
    REQUIRE(Utils::isEqual(sln.combinationSum2(tmp, 8), {
        {1, 7},
        {1, 2, 5},
        {2, 6},
        {1, 1, 6}
    }));
}
