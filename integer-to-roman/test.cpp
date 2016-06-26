#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.intToRoman(1) == "I");
	REQUIRE(sln.intToRoman(2) == "II");
	REQUIRE(sln.intToRoman(3) == "III");
	REQUIRE(sln.intToRoman(4) == "IV");
	REQUIRE(sln.intToRoman(5) == "V");
	REQUIRE(sln.intToRoman(6) == "VI");
	REQUIRE(sln.intToRoman(7) == "VII");
	REQUIRE(sln.intToRoman(8) == "VIII");
	REQUIRE(sln.intToRoman(9) == "IX");
	REQUIRE(sln.intToRoman(10) == "X");
	REQUIRE(sln.intToRoman(11) == "XI");
	REQUIRE(sln.intToRoman(12) == "XII");
	REQUIRE(sln.intToRoman(13) == "XIII");
	REQUIRE(sln.intToRoman(14) == "XIV");
	REQUIRE(sln.intToRoman(15) == "XV");
	REQUIRE(sln.intToRoman(16) == "XVI");
	REQUIRE(sln.intToRoman(17) == "XVII");
	REQUIRE(sln.intToRoman(18) == "XVIII");
	REQUIRE(sln.intToRoman(19) == "XIX");
	REQUIRE(sln.intToRoman(20) == "XX");
	REQUIRE(sln.intToRoman(30) == "XXX");
	REQUIRE(sln.intToRoman(40) == "XL");
	REQUIRE(sln.intToRoman(50) == "L");
	REQUIRE(sln.intToRoman(60) == "LX");
	REQUIRE(sln.intToRoman(70) == "LXX");
	REQUIRE(sln.intToRoman(80) == "LXXX");
	REQUIRE(sln.intToRoman(90) == "XC");
	REQUIRE(sln.intToRoman(99) == "XCIX");
	REQUIRE(sln.intToRoman(100) == "C");
	REQUIRE(sln.intToRoman(101) == "CI");
	REQUIRE(sln.intToRoman(102) == "CII");
	REQUIRE(sln.intToRoman(199) == "CXCIX");
	REQUIRE(sln.intToRoman(200) == "CC");
	REQUIRE(sln.intToRoman(300) == "CCC");
	REQUIRE(sln.intToRoman(400) == "CD");
	REQUIRE(sln.intToRoman(500) == "D");
	REQUIRE(sln.intToRoman(600) == "DC");
	REQUIRE(sln.intToRoman(800) == "DCCC");
	REQUIRE(sln.intToRoman(900) == "CM");
	REQUIRE(sln.intToRoman(1000) == "M");
	REQUIRE(sln.intToRoman(1400) == "MCD");
	REQUIRE(sln.intToRoman(1437) == "MCDXXXVII");
	REQUIRE(sln.intToRoman(1500) == "MD");
	REQUIRE(sln.intToRoman(1800) == "MDCCC");
	REQUIRE(sln.intToRoman(1880) == "MDCCCLXXX");
	REQUIRE(sln.intToRoman(1900) == "MCM");
	REQUIRE(sln.intToRoman(2000) == "MM");
	REQUIRE(sln.intToRoman(3000) == "MMM");
	REQUIRE(sln.intToRoman(3333) == "MMMCCCXXXIII");
}
