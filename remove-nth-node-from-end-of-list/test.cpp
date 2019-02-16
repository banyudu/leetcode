#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("empty values", "[Solution]")
{
    ListNode a(0);
    REQUIRE(sln.removeNthFromEnd(nullptr, 0) == nullptr);

    auto removed = sln.removeNthFromEnd(&a, 0);
    REQUIRE(removed == &a);
    REQUIRE(removed->val == 0);
    REQUIRE(removed->next == nullptr);
}

TEST_CASE("last value", "[Solution]")
{
    ListNode a(0), b(1);
    a.next = &b;

    auto removed = sln.removeNthFromEnd(&a, 1);
    REQUIRE(removed == &a);
    REQUIRE(removed->val == 0);
    REQUIRE(removed->next == nullptr);
}

TEST_CASE("normal value", "[Solution]")
{
    ListNode a(0), b(1), c(2);
    a.next = &b;
    b.next = &c;

    auto removed = sln.removeNthFromEnd(&a, 2);
    REQUIRE(removed == &a);
    REQUIRE(removed->val == 0);
    REQUIRE(removed->next == &c);
}