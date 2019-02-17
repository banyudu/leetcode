#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"
#include "../utils.hpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    vector<ListNode*> data = { Utils::getList({1, 4, 5}), Utils::getList({1, 3, 4}), Utils::getList({2, 6}) };
    auto result = sln.mergeKLists(data);
    REQUIRE(Utils::isEqual(result, Utils::getList({1, 1, 2, 3, 4, 4, 5, 6})));
}

TEST_CASE("empty values", "[Solution]")
{
    vector<ListNode*> data = {};
    REQUIRE(sln.mergeKLists(data) == nullptr);
}
