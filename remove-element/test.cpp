#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    vector<int> data1 = {1, 1, 2};
    int ret1 = sln.removeElement(data1, 1);
    REQUIRE(Utils::isEqual(vector<int>(data1.begin(), data1.begin() + ret1), {2}) == true);

    vector<int> data2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int ret2 = sln.removeElement(data2, 2);
    REQUIRE(Utils::isEqual(vector<int>(data2.begin(), data2.begin() + ret2), {0, 1, 3, 0, 4}) == true);
}