#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.lengthOfLongestSubstring("abcda") == 4);
	REQUIRE(sln.lengthOfLongestSubstring("10230034567") == 6);
	REQUIRE(sln.lengthOfLongestSubstring("abccba") == 3);
	REQUIRE(sln.lengthOfLongestSubstring("abcba") == 3);
	REQUIRE(sln.lengthOfLongestSubstring("cbca") == 3);
}

TEST_CASE("empty string", "[Solution]")
{
	REQUIRE(sln.lengthOfLongestSubstring("") == 0);
}
