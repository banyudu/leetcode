#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.isPalindrome(121) == true);
	REQUIRE(sln.isPalindrome(1221) == true);
	REQUIRE(sln.isPalindrome(1) == true);
	REQUIRE(sln.isPalindrome(12332) == false);
}

// according to leetcode check result, negative values are not palindrome value
TEST_CASE("negative values", "[Solution]")
{
	REQUIRE(sln.isPalindrome(-121) == false);
	REQUIRE(sln.isPalindrome(-1221) == false);
	REQUIRE(sln.isPalindrome(-1) == false);
	REQUIRE(sln.isPalindrome(-12332) == false);
}

TEST_CASE("overflow", "[Solution]")
{
	long long maxValue = INT_MAX;
	maxValue++;
	long long minValue = INT_MIN;
	minValue--;
	REQUIRE(sln.isPalindrome(INT_MAX) == false);
	REQUIRE(sln.isPalindrome(INT_MIN) == false);
	REQUIRE(sln.isPalindrome(maxValue) == false);
	REQUIRE(sln.isPalindrome(minValue) == false);
}

TEST_CASE("single", "[Solution]")
{
	for (int i = 1; i < 9; i++)
	{
		REQUIRE(sln.isPalindrome(i) == true);
		REQUIRE(sln.isPalindrome(-i) == false);
	}
}

TEST_CASE("zero", "[Solution]")
{
	REQUIRE(sln.isPalindrome(0) == true);
}

TEST_CASE("leetcode fail cases")
{
	REQUIRE(sln.isPalindrome(-101) == false);
	REQUIRE(sln.isPalindrome(1410110141) == true);
}
