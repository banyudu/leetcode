#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.strStr("abc", "") == 0);
    REQUIRE(sln.strStr("abc", "b") == 1);
    REQUIRE(sln.strStr("abbcbb", "bb") == 1);
    REQUIRE(sln.strStr("abbcbb", "bbb") == -1);
    REQUIRE(sln.strStr("a", "aa") == -1);
    REQUIRE(sln.strStr("a", "a") == 0);
}
