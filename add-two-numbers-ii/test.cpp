#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(
        sln.addTwoNumbers(
            Utils::getList({7, 2, 4, 3}),
            Utils::getList({5, 6, 4})
        ),
        Utils::getList({7, 8, 0, 7}))
    );

    REQUIRE(Utils::isEqual(
        sln.addTwoNumbers(
            Utils::getList({7, 2, 4, 3}),
            Utils::getList({0})
        ),
        Utils::getList({7, 2, 4, 3}))
    );

    REQUIRE(Utils::isEqual(
        sln.addTwoNumbers(
            Utils::getList({5}),
            Utils::getList({5})
        ),
        Utils::getList({1, 0}))
    );
}
