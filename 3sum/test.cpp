#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

typedef vector<vector<int>> ResultType;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.threeSum({-1, 0, 1, 2, -1, -4}) == ResultType({{-1, 0, 1}, {-1, -1, 2}}));
	REQUIRE(sln.threeSum({-1, 0, 1, 3, -1, -4}) == ResultType({{-4, 1, 3}, {-1, 0, 1}}));
}

TEST_CASE("empty values", "[Solution]")
{
	REQUIRE(sln.threeSum({}) == ResultType({}));
}

TEST_CASE("zero values", "[Solution]")
{
	REQUIRE(sln.threeSum({0, 1, 2, 0, 4, 0}) == ResultType({{0, 0, 0}}));
	REQUIRE(sln.threeSum({0, 0, 0}) == ResultType({{0, 0, 0}}));
	REQUIRE(sln.threeSum({0, 0, 0, -5, 5}) == ResultType({{0, 0, 0}, {-5, 0, 5}}));
}
