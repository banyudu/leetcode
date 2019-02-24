#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.repeatedStringMatch("abc", "") == -1); // invalid input
    REQUIRE(sln.repeatedStringMatch("", "abc") == -1); // invalid input
    REQUIRE(sln.repeatedStringMatch("ab", "abab") == 2);
    REQUIRE(sln.repeatedStringMatch("ab", "babab") == 3);
    REQUIRE(sln.repeatedStringMatch("ab", "ababa") == 3);
    REQUIRE(sln.repeatedStringMatch("abcdefg", "ga") == 2);
    REQUIRE(sln.repeatedStringMatch("a", "aaaaa") == 5);
    REQUIRE(sln.repeatedStringMatch("a", "b") == -1);
    REQUIRE(sln.repeatedStringMatch("ab", "abb") == -1);
}
