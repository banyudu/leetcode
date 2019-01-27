#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.isMatch("aa","a") == false);
	REQUIRE(sln.isMatch("aa","aa") == true);
	REQUIRE(sln.isMatch("aaa","aa") == false);
	REQUIRE(sln.isMatch("aa", "a*") == true);
	REQUIRE(sln.isMatch("aa", ".*") == true);
	REQUIRE(sln.isMatch("ab", ".*") == true);
	REQUIRE(sln.isMatch("aab", "c*a*b") == true);
	REQUIRE(sln.isMatch("aab", "aba") == false);
	REQUIRE(sln.isMatch("0123456789", "012345.789*") == true);
	REQUIRE(sln.isMatch("ahello", "hello") == false);
	REQUIRE(sln.isMatch("good morning", "good evening") == false);
}

TEST_CASE("error syntax", "[Solution]")
{
	REQUIRE(sln.isMatch("aa","*a*") == false);
	REQUIRE(sln.isMatch("aa","*..") == false);
}

TEST_CASE("special characters", "[Solution]")
{
	REQUIRE(sln.isMatch("123qwe!@#", "\\*123qwe!@.") == false);
	REQUIRE(sln.isMatch("...", "...") == true);
	REQUIRE(sln.isMatch("***", "***") == false);
	REQUIRE(sln.isMatch("\\", ".") == true);
	REQUIRE(sln.isMatch("\\", "\\\\") == true);
	REQUIRE(sln.isMatch("\\", "\\") == false);
	REQUIRE(sln.isMatch(".", "\\.") == true);
	REQUIRE(sln.isMatch("hello world", ".*") == true);
}

TEST_CASE("empty", "[Solution]")
{
	REQUIRE(sln.isMatch("", "") == true);
	REQUIRE(sln.isMatch("a", "") == false);
	REQUIRE(sln.isMatch("", "a") == false);
	REQUIRE(sln.isMatch("", "a*") == true);
	REQUIRE(sln.isMatch("", "\\*") == false);
	REQUIRE(sln.isMatch("", "\\\\*") == true);
}

TEST_CASE("spaces", "[Solution]")
{
	REQUIRE(sln.isMatch("\n", "\n") == true);
	REQUIRE(sln.isMatch("\t", "\t") == true);
	REQUIRE(sln.isMatch("\v", "\v") == true);
	REQUIRE(sln.isMatch("\f", "\f") == true);
	REQUIRE(sln.isMatch(" ", " ") == true);
	REQUIRE(sln.isMatch(" ", ".") == true);
	REQUIRE(sln.isMatch("hello\tworld\n", ".*") == true);
}

TEST_CASE("greed", "[Solution]")
{
	REQUIRE(sln.isMatch("aaa", ".*a") == true);
	REQUIRE(sln.isMatch("aaa", "a.*") == true);
	REQUIRE(sln.isMatch("aaa", "a*a") == true);
	REQUIRE(sln.isMatch("aaa", "a*aaa") == true);
	REQUIRE(sln.isMatch("aaa", "aaaa*") == true);
	REQUIRE(sln.isMatch("aaa", "a*aaaa") == false);
	REQUIRE(sln.isMatch("aaa", "aaaa*a") == false);
}
