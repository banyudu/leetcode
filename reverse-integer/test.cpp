#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.reverse(23) == 32);
	REQUIRE(sln.reverse(105) == 501);
	REQUIRE(sln.reverse(10521) == 12501);
	REQUIRE(sln.reverse(3) == 3);
}

TEST_CASE("zero", "[Solution]")
{
	REQUIRE(sln.reverse(0) == false);
}

TEST_CASE("negative values", "[Solution]")
{
	REQUIRE(sln.reverse(-3) == -3);
	REQUIRE(sln.reverse(-41) == -14);
	REQUIRE(sln.reverse(-1241) == -1421);
}

TEST_CASE("failed values from leetcode", "[Solution]")
{
	REQUIRE(sln.reverse(1534236469) == 0);
	REQUIRE(sln.reverse(-1534236469) == 0);
}
