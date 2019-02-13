#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

typedef vector<vector<int>> ResultType;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(Utils::isEqual(sln.fourSum({1, 0, -1, 0, -2, 2}, 0), ResultType({{-1,  0, 0, 1}, {-2, -1, 1, 2}, {-2,  0, 0, 2}})));
}

TEST_CASE("empty values", "[Solution]")
{
	REQUIRE(sln.fourSum({}, 0) == ResultType({}));
}