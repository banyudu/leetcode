#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.calculate("1+2") == 3);
	REQUIRE(sln.calculate("100+2-23") == 79);
	REQUIRE(sln.calculate("100-2+23") == 121);
	REQUIRE(sln.calculate("2-23+100") == 79);
	REQUIRE(sln.calculate("2-(23+100)") == -121);
}

TEST_CASE("spaces", "[Solution]")
{
	REQUIRE(sln.calculate("1+ 2") == 3);
	REQUIRE(sln.calculate(" 100 +2-23 ") == 79);
	REQUIRE(sln.calculate("100            -2                               +23") == 121);
}
