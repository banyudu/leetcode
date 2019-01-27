#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.convert("0123456789", 11) == "0123456789");
	REQUIRE(sln.convert("0123456789", 10) == "0123456789");
	REQUIRE(sln.convert("0123456789", 9) == "0123456798");
	REQUIRE(sln.convert("0123456789", 8) == "0123459687");
	REQUIRE(sln.convert("0123456789", 7) == "0123948576");
	REQUIRE(sln.convert("0123456789", 6) == "0192837465");
	REQUIRE(sln.convert("0123456789", 5) == "0817926354");
	REQUIRE(sln.convert("0123456789", 4) == "0615724839");
	REQUIRE(sln.convert("0123456789", 3) == "0481357926");
	REQUIRE(sln.convert("0123456789", 2) == "0246813579");
	REQUIRE(sln.convert("0123456789", 1) == "0123456789");
	REQUIRE(sln.convert("0123456789", 0) == "0123456789");
	REQUIRE(sln.convert("0123456789", -1) == "0123456789");
}

TEST_CASE("same values", "[Solution]")
{
	string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	for (int i = 0; i < 1000; i++)
		REQUIRE(sln.convert(str, i) == str);
}

TEST_CASE("negative rows", "[Solution]")
{
	for (int i = -1; i > -100; i--)
		REQUIRE(sln.convert("hello", i) == "hello");
}

TEST_CASE("empty string", "[Solution]")
{
	for(int i = 1; i < 10000; i++)
		REQUIRE(sln.convert("", i) == "");
}
