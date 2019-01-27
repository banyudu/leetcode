#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.isAnagram("abc", "cba") == true);
	REQUIRE(sln.isAnagram("abc", "cab") == true);
	REQUIRE(sln.isAnagram("abc", "ca") == false);
}

TEST_CASE("empty values", "[Solution]")
{
	REQUIRE(sln.isAnagram("abc", "") == false);
	REQUIRE(sln.isAnagram("", "abc") == false);
	REQUIRE(sln.isAnagram("", "") == true);
}

TEST_CASE("same characters", "[Solution]")
{
	REQUIRE(sln.isAnagram("aaa", "aab") == false);
	REQUIRE(sln.isAnagram("aaa", "aaa") == true);
	REQUIRE(sln.isAnagram("aba", "baa") == true);
}

TEST_CASE("long strings", "[Solution]")
{
	REQUIRE(sln.isAnagram("qwertyuiopasdfghjklzxcvbnm", "zxcvbnmasdfghjklqwertyuiop") == true);
	REQUIRE(sln.isAnagram("qwertyuiopasdfghjklzxcvbnn", "zxcvbnmasdfghjklqwertyuiop") == false);
	REQUIRE(sln.isAnagram("qwertyuiopasdfghjklzxcvbnm", "__") == false);
}
