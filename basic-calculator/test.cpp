#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

const int INVALID_RESULT = 0;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.calculate("1+2") == 3);
	REQUIRE(sln.calculate("100+2-23") == 79);
	REQUIRE(sln.calculate("100-2+23") == 121);
	REQUIRE(sln.calculate("2-23+100") == 79);
	REQUIRE(sln.calculate("2-(23+100)") == -121);
	REQUIRE(sln.calculate("1+(2+(3+(4+(5+(6+(7+(8)))))))") == 36);
	REQUIRE(sln.calculate("100 - (1+(2+(3+(4+(5+(6+(7+(8))))))))") == 64);
	REQUIRE(sln.calculate("123") == 123);
	REQUIRE(sln.calculate("(123)") == 123);
	REQUIRE(sln.calculate("(1+2)") == 3);
}

TEST_CASE("spaces", "[Solution]")
{
	REQUIRE(sln.calculate("1+ 2") == 3);
	REQUIRE(sln.calculate(" 100 +2-23 ") == 79);
	REQUIRE(sln.calculate("100            -2                               +23") == 121);
}

TEST_CASE("empty", "[Solution]")
{
	REQUIRE(sln.calculate("") == 0);
	REQUIRE(sln.calculate(" ") == 0);
	REQUIRE(sln.calculate("                                     ") == 0);
}


TEST_CASE("invalid input", "[Solution]")
{
	REQUIRE(sln.calculate("a + 1") == INVALID_RESULT);
	REQUIRE(sln.calculate("hello world") == INVALID_RESULT);
	REQUIRE(sln.calculate("1a + 2") == INVALID_RESULT);
	REQUIRE(sln.calculate("(1+1") == INVALID_RESULT);
	REQUIRE(sln.calculate(")1+1") == INVALID_RESULT);
	REQUIRE(sln.calculate(",1+1") == INVALID_RESULT);
}
