#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(
        sln.removeElements(Utils::getList({1, 2, 6, 3, 4, 5, 6}), 6),
        Utils::getList({1, 2, 3, 4, 5})
    ) == true);
}

TEST_CASE("edge values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.removeElements(nullptr, 6), nullptr) == true);
    REQUIRE(Utils::isEqual(sln.removeElements(Utils::getList({6}), 6), nullptr) == true);
    REQUIRE(Utils::isEqual(sln.removeElements(Utils::getList({6, 5}), 6), Utils::getList({5})) == true);
}