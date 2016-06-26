#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.longestCommonPrefix({"hello1", "hello2", "hello3"}) == "hello");
	REQUIRE(sln.longestCommonPrefix({"hello1", "hello", "hello3"}) == "hello");
	REQUIRE(sln.longestCommonPrefix({"hello1", "ello3"}) == "");
}

TEST_CASE("empty values", "[Solution]")
{
	REQUIRE(sln.longestCommonPrefix({"", "", ".."}) == "");
	REQUIRE(sln.longestCommonPrefix({}) == "");
	REQUIRE(sln.longestCommonPrefix({""}) == "");
}

TEST_CASE("special characters", "[Solution]")
{
	REQUIRE(sln.longestCommonPrefix({"!@#", "!!!", "!_$%123"}) == "!");
}

TEST_CASE("wide characters", "[Solution]")
{
	REQUIRE(sln.longestCommonPrefix({"！￥", "！a"}) == "！");
	REQUIRE(sln.longestCommonPrefix({"！￥", ".！a"}) == "");
}
