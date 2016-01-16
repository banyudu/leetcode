#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	SECTION("ordered")
	{
		vector<int> values({1,2,3,4,5,6,7,8});
		REQUIRE(sln.twoSum(values, 15) == vector<int>({7,8}));
		REQUIRE(sln.twoSum(values, 14) == vector<int>({6,8}));
		REQUIRE(sln.twoSum(values, 3) == vector<int>({1,2}));
		REQUIRE(sln.twoSum(values, 4) == vector<int>({1,3}));
	}
	SECTION("unordered")
	{
		vector<int> values({1,2,3,6,7,8,4,5});
		REQUIRE(sln.twoSum(values, 15) == vector<int>({5,6}));
		REQUIRE(sln.twoSum(values, 14) == vector<int>({4,6}));
	}
}

TEST_CASE("negative values", "[Solution]")
{
	vector<int> values({-1, -10, -20});
	REQUIRE(sln.twoSum(values, -11) == vector<int>({1,2}));
	REQUIRE(sln.twoSum(values, -21) == vector<int>({1,3}));
}

TEST_CASE("mix positive and negative values", "[Solution]")
{
	vector<int> values({-1, 10, -20});
	REQUIRE(sln.twoSum(values, 9) == vector<int>({1,2}));
	REQUIRE(sln.twoSum(values, -21) == vector<int>({1,3}));
}

TEST_CASE("same values", "[Solution]")
{
	vector<int> values({4, 3, 21, 4});
	REQUIRE(sln.twoSum(values, 8) == vector<int>({1,4}));
}

TEST_CASE("half value", "[Solution]")
{
	vector<int> values({4, 3, 21, 5});
	REQUIRE(sln.twoSum(values, 8) == vector<int>({2,4}));	
}
