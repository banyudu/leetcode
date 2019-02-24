#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.swapPairs(Utils::getList({1, 2, 3, 4})), Utils::getList({2, 1, 4, 3})));
    REQUIRE(sln.swapPairs(nullptr) == nullptr);
    REQUIRE(Utils::isEqual(sln.swapPairs(Utils::getList({1})), Utils::getList({1})));
}
