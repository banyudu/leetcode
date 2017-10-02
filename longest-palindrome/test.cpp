#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.longestPalindrome("abc") == 1);
	REQUIRE(sln.longestPalindrome("112") == 3);
	REQUIRE(sln.longestPalindrome("1234567aaaa890123") == 11);
	REQUIRE(sln.longestPalindrome("12321") == 5);
}

TEST_CASE("imnormal values", "[Solution]")
{
	REQUIRE(sln.longestPalindrome("") == 0);
	REQUIRE(sln.longestPalindrome("Aa") == 1);
	REQUIRE(sln.longestPalindrome("A") == 1);
	REQUIRE(sln.longestPalindrome("AbBa") == 1);
}