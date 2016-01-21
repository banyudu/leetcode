#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

bool equal(double v1, double v2)
{
	cout << "left: " << v1 << "\tright: " << v2 << endl;
	return fabs(v1 - v2) < 0.000001;
}

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(equal(sln.findMedianSortedArrays({1,2,3}, {4,5,6}), 3.5));
	REQUIRE(equal(sln.findMedianSortedArrays({1,2}, {4,5,6}), 4));
	REQUIRE(equal(sln.findMedianSortedArrays({2,5,7}, {1,3,9}), 4));
}

TEST_CASE("empty array", "[Solution]")
{
	REQUIRE(equal(sln.findMedianSortedArrays({1,2,3}, {}), 2));
	REQUIRE(equal(sln.findMedianSortedArrays({}, {1,10,11}), 10));
	REQUIRE(equal(sln.findMedianSortedArrays({}, {}), 0));
}
