#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../utils.hpp"
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.reverseKGroup(Utils::getList({1, 2, 3, 4}), 2), Utils::getList({2, 1, 4, 3})));
    REQUIRE(sln.reverseKGroup(nullptr, 1) == nullptr);
    REQUIRE(Utils::isEqual(sln.reverseKGroup(Utils::getList({1}), 1), Utils::getList({1})));
    REQUIRE(Utils::isEqual(sln.reverseKGroup(Utils::getList({1, 2, 3, 4, 5}), 3), Utils::getList({3, 2, 1, 4, 5})));
}
