#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(1 == sln.romanToInt("I"));
	REQUIRE(2 == sln.romanToInt("II"));
	REQUIRE(3 == sln.romanToInt("III"));
	REQUIRE(4 == sln.romanToInt("IV"));
	REQUIRE(5 == sln.romanToInt("V"));
	REQUIRE(6 == sln.romanToInt("VI"));
	REQUIRE(7 == sln.romanToInt("VII"));
	REQUIRE(8 == sln.romanToInt("VIII"));
	REQUIRE(9 == sln.romanToInt("IX"));
	REQUIRE(10 == sln.romanToInt("X"));
	REQUIRE(11 == sln.romanToInt("XI"));
	REQUIRE(12 == sln.romanToInt("XII"));
	REQUIRE(13 == sln.romanToInt("XIII"));
	REQUIRE(14 == sln.romanToInt("XIV"));
	REQUIRE(15 == sln.romanToInt("XV"));
	REQUIRE(16 == sln.romanToInt("XVI"));
	REQUIRE(17 == sln.romanToInt("XVII"));
	REQUIRE(18 == sln.romanToInt("XVIII"));
	REQUIRE(19 == sln.romanToInt("XIX"));
	REQUIRE(20 == sln.romanToInt("XX"));
	REQUIRE(30 == sln.romanToInt("XXX"));
	REQUIRE(40 == sln.romanToInt("XL"));
	REQUIRE(50 == sln.romanToInt("L"));
	REQUIRE(60 == sln.romanToInt("LX"));
	REQUIRE(70 == sln.romanToInt("LXX"));
	REQUIRE(80 == sln.romanToInt("LXXX"));
	REQUIRE(90 == sln.romanToInt("XC"));
	REQUIRE(99 == sln.romanToInt("XCIX"));
	REQUIRE(100 == sln.romanToInt("C"));
	REQUIRE(101 == sln.romanToInt("CI"));
	REQUIRE(102 == sln.romanToInt("CII"));
	REQUIRE(199 == sln.romanToInt("CXCIX"));
	REQUIRE(200 == sln.romanToInt("CC"));
	REQUIRE(300 == sln.romanToInt("CCC"));
	REQUIRE(400 == sln.romanToInt("CD"));
	REQUIRE(500 == sln.romanToInt("D"));
	REQUIRE(600 == sln.romanToInt("DC"));
	REQUIRE(800 == sln.romanToInt("DCCC"));
	REQUIRE(900 == sln.romanToInt("CM"));
	REQUIRE(1000 == sln.romanToInt("M"));
	REQUIRE(1400 == sln.romanToInt("MCD"));
	REQUIRE(1437 == sln.romanToInt("MCDXXXVII"));
	REQUIRE(1500 == sln.romanToInt("MD"));
	REQUIRE(1800 == sln.romanToInt("MDCCC"));
	REQUIRE(1880 == sln.romanToInt("MDCCCLXXX"));
	REQUIRE(1900 == sln.romanToInt("MCM"));
	REQUIRE(2000 == sln.romanToInt("MM"));
	REQUIRE(3000 == sln.romanToInt("MMM"));
	REQUIRE(3333 == sln.romanToInt("MMMCCCXXXIII"));
}
