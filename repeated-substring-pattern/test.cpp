#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.repeatedSubstringPattern("") == false);
    REQUIRE(sln.repeatedSubstringPattern("a") == false);
    REQUIRE(sln.repeatedSubstringPattern("aa") == true);
    REQUIRE(sln.repeatedSubstringPattern("aba") == false);
    REQUIRE(sln.repeatedSubstringPattern("abab") == true);
    REQUIRE(sln.repeatedSubstringPattern("abcabcabcabc") == true);
}
