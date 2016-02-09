#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.isPowerOfThree(0) == false);
	REQUIRE(sln.isPowerOfThree(27) == true);
	REQUIRE(sln.isPowerOfThree(36) == false);
	REQUIRE(sln.isPowerOfThree(181) == false);
	REQUIRE(sln.isPowerOfThree(56322) == false);
	REQUIRE(sln.isPowerOfThree(56321) == false);
}

TEST_CASE("zero", "[Solution]")
{
	REQUIRE(sln.isPowerOfThree(0) == false);
}

TEST_CASE("negative values", "[Solution]")
{
	REQUIRE(sln.isPowerOfThree(-3) == false);
	REQUIRE(sln.isPowerOfThree(-4) == false);
}


