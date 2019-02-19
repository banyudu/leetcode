#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    auto n1 = Utils::getList({1, 2, 3, 4, 5});
    auto n2 = n1->next;
    auto n3 = n2->next;
    auto n4 = n3->next;
    auto n5 = n4->next;
    REQUIRE(sln.middleNode(n1) == n3);
    REQUIRE(sln.middleNode(n2) == n4);
    REQUIRE(sln.middleNode(n4) == n5);
    REQUIRE(sln.middleNode(n5) == n5);
    REQUIRE(sln.middleNode(nullptr) == nullptr);
}
