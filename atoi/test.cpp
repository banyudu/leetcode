#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.myAtoi("1") == atoi("1"));
	REQUIRE(sln.myAtoi("2") == atoi("2"));
	REQUIRE(sln.myAtoi("10") == atoi("10"));
	REQUIRE(sln.myAtoi("9876") == atoi("9876"));
	REQUIRE(sln.myAtoi("123456") == atoi("123456"));
}

TEST_CASE("zero", "[Solution]")
{
	REQUIRE(sln.myAtoi("0") == atoi("0"));
}

TEST_CASE("empty", "[Solution]")
{
	REQUIRE(sln.myAtoi("") == atoi(""));
}

TEST_CASE("negative values", "[Solution]")
{
	REQUIRE(sln.myAtoi("-1") == atoi("-1"));
	REQUIRE(sln.myAtoi("-2") == atoi("-2"));
	REQUIRE(sln.myAtoi("-10") == atoi("-10"));
	REQUIRE(sln.myAtoi("-9876") == atoi("-9876"));
	REQUIRE(sln.myAtoi("-123456") == atoi("-123456"));
}

TEST_CASE("symbols", "[Solution]")
{
	REQUIRE(sln.myAtoi("-20") == atoi("-20"));
	REQUIRE(sln.myAtoi("+2") == atoi("+2"));
	REQUIRE(sln.myAtoi("++10") == atoi("++10"));
	REQUIRE(sln.myAtoi("--9876") == atoi("--9876"));
	REQUIRE(sln.myAtoi("--123456") == atoi("--123456"));
	REQUIRE(sln.myAtoi("+0") == atoi("+0"));
	REQUIRE(sln.myAtoi("-0") == atoi("-0"));
	REQUIRE(sln.myAtoi("++") == atoi("++"));
	REQUIRE(sln.myAtoi("-") == atoi("-"));
	REQUIRE(sln.myAtoi("+") == atoi("+"));
	REQUIRE(sln.myAtoi("--") == atoi("--"));
}

TEST_CASE("float values", "[Solution]")
{
	REQUIRE(sln.myAtoi(".1") == atoi(".1"));
	REQUIRE(sln.myAtoi("1.2") == atoi("1.2"));
	REQUIRE(sln.myAtoi("12345.6789") == atoi("12345.6789"));
	REQUIRE(sln.myAtoi("+0.1") == atoi("+0.1"));
	REQUIRE(sln.myAtoi("-9.712") == atoi("-9.712"));
	REQUIRE(sln.myAtoi("-.1") == atoi("-.1"));
	REQUIRE(sln.myAtoi("+.2") == atoi("+.2"));
	REQUIRE(sln.myAtoi(".") == atoi("."));
	REQUIRE(sln.myAtoi("0.") == atoi("0."));
	REQUIRE(sln.myAtoi("h") == atoi("h"));
}

TEST_CASE("bad values", "[Solution]")
{
	REQUIRE(sln.myAtoi("h") == atoi("h"));
	REQUIRE(sln.myAtoi("1a") == atoi("1a"));
	REQUIRE(sln.myAtoi("a1") == atoi("a1"));
	REQUIRE(sln.myAtoi(".ui") == atoi(".ui"));
	REQUIRE(sln.myAtoi("{}") == atoi("{}"));
	REQUIRE(sln.myAtoi("()") == atoi("()"));
	REQUIRE(sln.myAtoi("1+2") == atoi("1+2"));
	REQUIRE(sln.myAtoi("_1") == atoi("_1"));
}
