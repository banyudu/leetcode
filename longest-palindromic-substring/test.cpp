#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.longestPalindrome("1") == "1");
	REQUIRE(sln.longestPalindrome("112") == "11");
	REQUIRE(sln.longestPalindrome("1234567aaaa890123") == "aaaa");
	REQUIRE(sln.longestPalindrome("12321") == "12321");
}

TEST_CASE("empty value", "[Solutioni]")
{
	REQUIRE(sln.longestPalindrome("") == "");
}

TEST_CASE("special characters", "[Solution]")
{
	REQUIRE(sln.longestPalindrome("<aa>") == "aa");
	REQUIRE(sln.longestPalindrome("??") == "??");
	REQUIRE(sln.longestPalindrome("=-=") == "=-=");

	// Trigraph sequences
//	REQUIRE(sln.longestPalindrome(">??<") == "??");
	REQUIRE(sln.longestPalindrome("#>>#") == "#>>#");
}

TEST_CASE("chinese characters", "Solution")
{
//	REQUIRE(sln.longestPalindrome("上海自来水来自海上") == "上海自来水来自海上");
}
