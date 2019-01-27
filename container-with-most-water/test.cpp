#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.maxArea(vector<int>{0,1,2}) == 1);
	REQUIRE(sln.maxArea(vector<int>{0,1,2,3}) == 2);
	REQUIRE(sln.maxArea(vector<int>{0,1,2,3,4}) == 4);
	REQUIRE(sln.maxArea(vector<int>{0,1,2,3,4,80,1,2,4,5,6,7,8,20,1,2,3,1}) == 160);
}

TEST_CASE("empty input", "[Solution]")
{
	REQUIRE(sln.maxArea(vector<int>()) == 0);
	for (int i = 0; i < 100; i++)
	{
		REQUIRE(sln.maxArea(vector<int>{i}) == 0);
	}
}

TEST_CASE("two element", "[Solution]")
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			REQUIRE(sln.maxArea(vector<int>{i, j}) == min(i, j));
		}
	}
}
