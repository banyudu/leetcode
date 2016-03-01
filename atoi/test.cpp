#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include <catch.hpp>
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(sln.myAtoi("1") == atoi("1"));
	REQUIRE(sln.myAtoi("2") == atoi("2"));
	REQUIRE(sln.myAtoi("10") == atoi("10"));
	REQUIRE(sln.myAtoi("9876") == atoi("9876"));
	REQUIRE(sln.myAtoi("123456") == atoi("123456"));
}

TEST_CASE("zero", "[Solution]")
{
	REQUIRE(sln.myAtoi("0") == atoi("0"));
}

TEST_CASE("empty", "[Solution]")
{
	REQUIRE(sln.myAtoi("") == atoi(""));
}

TEST_CASE("negative values", "[Solution]")
{
	REQUIRE(sln.myAtoi("-1") == atoi("-1"));
	REQUIRE(sln.myAtoi("-2") == atoi("-2"));
	REQUIRE(sln.myAtoi("-10") == atoi("-10"));
	REQUIRE(sln.myAtoi("-9876") == atoi("-9876"));
	REQUIRE(sln.myAtoi("-123456") == atoi("-123456"));
}

TEST_CASE("symbols", "[Solution]")
{
	REQUIRE(sln.myAtoi("-20") == atoi("-20"));
	REQUIRE(sln.myAtoi("+2") == atoi("+2"));
	REQUIRE(sln.myAtoi("++10") == atoi("++10"));
	REQUIRE(sln.myAtoi("--9876") == atoi("--9876"));
	REQUIRE(sln.myAtoi("--123456") == atoi("--123456"));
	REQUIRE(sln.myAtoi("+0") == atoi("+0"));
	REQUIRE(sln.myAtoi("-0") == atoi("-0"));
	REQUIRE(sln.myAtoi("++") == atoi("++"));
	REQUIRE(sln.myAtoi("-") == atoi("-"));
	REQUIRE(sln.myAtoi("+") == atoi("+"));
	REQUIRE(sln.myAtoi("--") == atoi("--"));
}

TEST_CASE("float values", "[Solution]")
{
	REQUIRE(sln.myAtoi(".1") == atoi(".1"));
	REQUIRE(sln.myAtoi("1.2") == atoi("1.2"));
	REQUIRE(sln.myAtoi("12345.6789") == atoi("12345.6789"));
	REQUIRE(sln.myAtoi("+0.1") == atoi("+0.1"));
	REQUIRE(sln.myAtoi("-9.712") == atoi("-9.712"));
	REQUIRE(sln.myAtoi("-.1") == atoi("-.1"));
	REQUIRE(sln.myAtoi("+.2") == atoi("+.2"));
	REQUIRE(sln.myAtoi(".") == atoi("."));
	REQUIRE(sln.myAtoi("0.") == atoi("0."));
	REQUIRE(sln.myAtoi("h") == atoi("h"));
}

TEST_CASE("bad values", "[Solution]")
{
	REQUIRE(sln.myAtoi("h") == atoi("h"));
	REQUIRE(sln.myAtoi("1a") == atoi("1a"));
	REQUIRE(sln.myAtoi("a1") == atoi("a1"));
	REQUIRE(sln.myAtoi(".ui") == atoi(".ui"));
	REQUIRE(sln.myAtoi("{}") == atoi("{}"));
	REQUIRE(sln.myAtoi("()") == atoi("()"));
	REQUIRE(sln.myAtoi("1+2") == atoi("1+2"));
	REQUIRE(sln.myAtoi("_1") == atoi("_1"));
}

TEST_CASE("space", "[Solution]")
{
	REQUIRE(sln.myAtoi(" ") == atoi(" "));
	REQUIRE(sln.myAtoi(" 1") == atoi(" 1"));
	REQUIRE(sln.myAtoi(" .1") == atoi(" .1"));
	REQUIRE(sln.myAtoi(" -.1") == atoi(" -.1"));
	REQUIRE(sln.myAtoi(" -a") == atoi(" -a"));
	REQUIRE(sln.myAtoi(" 123 ") == atoi(" 123 "));
	REQUIRE(sln.myAtoi("123 ") == atoi("123 "));
	REQUIRE(sln.myAtoi("1 2 3") == atoi("1 2 3"));
	REQUIRE(sln.myAtoi("+ 1") == atoi("+ 1"));
	REQUIRE(sln.myAtoi(" -1") == atoi(" -1"));
}

TEST_CASE("tab", "[Solution]")
{
	REQUIRE(sln.myAtoi("\t") == atoi("\t"));
	REQUIRE(sln.myAtoi("\t1") == atoi("\t1"));
	REQUIRE(sln.myAtoi("\t.1") == atoi("\t.1"));
	REQUIRE(sln.myAtoi("\t-.1") == atoi("\t-.1"));
	REQUIRE(sln.myAtoi("\t-a") == atoi("\t-a"));
	REQUIRE(sln.myAtoi("\t123\t") == atoi("\t123\t"));
	REQUIRE(sln.myAtoi("123\t") == atoi("123\t"));
	REQUIRE(sln.myAtoi("1\t2\t3") == atoi("1\t2\t3"));
	REQUIRE(sln.myAtoi("+\t1") == atoi("+\t1"));
	REQUIRE(sln.myAtoi("\t-1") == atoi("\t-1"));
}

TEST_CASE("Newline", "[Solution]")
{
	REQUIRE(sln.myAtoi("\n") == atoi("\n"));
	REQUIRE(sln.myAtoi("\n1") == atoi("\n1"));
	REQUIRE(sln.myAtoi("\n.1") == atoi("\n.1"));
	REQUIRE(sln.myAtoi("\n-.1") == atoi("\n-.1"));
	REQUIRE(sln.myAtoi("\n-a") == atoi("\n-a"));
	REQUIRE(sln.myAtoi("\n123\n") == atoi("\n123\n"));
	REQUIRE(sln.myAtoi("123\n") == atoi("123\n"));
	REQUIRE(sln.myAtoi("1\n2\n3") == atoi("1\n2\n3"));
	REQUIRE(sln.myAtoi("+\n1") == atoi("+\n1"));
	REQUIRE(sln.myAtoi("\n-1") == atoi("\n-1"));
}

TEST_CASE("Return", "[Solution]")
{
	REQUIRE(sln.myAtoi("\r") == atoi("\r"));
	REQUIRE(sln.myAtoi("\r1") == atoi("\r1"));
	REQUIRE(sln.myAtoi("\r.1") == atoi("\r.1"));
	REQUIRE(sln.myAtoi("\r-.1") == atoi("\r-.1"));
	REQUIRE(sln.myAtoi("\r-a") == atoi("\r-a"));
	REQUIRE(sln.myAtoi("\r123\r") == atoi("\r123\r"));
	REQUIRE(sln.myAtoi("123\r") == atoi("123\r"));
	REQUIRE(sln.myAtoi("1\r2\r3") == atoi("1\r2\r3"));
	REQUIRE(sln.myAtoi("+\r1") == atoi("+\r1"));
	REQUIRE(sln.myAtoi("\r-1") == atoi("\r-1"));
}

TEST_CASE("Vertical Tab", "[Solution]")
{
	REQUIRE(sln.myAtoi("\v") == atoi("\v"));
	REQUIRE(sln.myAtoi("\v1") == atoi("\v1"));
	REQUIRE(sln.myAtoi("\v.1") == atoi("\v.1"));
	REQUIRE(sln.myAtoi("\v-.1") == atoi("\v-.1"));
	REQUIRE(sln.myAtoi("\v-a") == atoi("\v-a"));
	REQUIRE(sln.myAtoi("\v123\v") == atoi("\v123\v"));
	REQUIRE(sln.myAtoi("123\v") == atoi("123\v"));
	REQUIRE(sln.myAtoi("1\v2\v3") == atoi("1\v2\v3"));
	REQUIRE(sln.myAtoi("+\v1") == atoi("+\v1"));
	REQUIRE(sln.myAtoi("\v-1") == atoi("\v-1"));
}

TEST_CASE("New page", "[Solution]")
{
	REQUIRE(sln.myAtoi("\f") == atoi("\f"));
	REQUIRE(sln.myAtoi("\f1") == atoi("\f1"));
	REQUIRE(sln.myAtoi("\f.1") == atoi("\f.1"));
	REQUIRE(sln.myAtoi("\f-.1") == atoi("\f-.1"));
	REQUIRE(sln.myAtoi("\f-a") == atoi("\f-a"));
	REQUIRE(sln.myAtoi("\f123\f") == atoi("\f123\f"));
	REQUIRE(sln.myAtoi("123\f") == atoi("123\f"));
	REQUIRE(sln.myAtoi("1\f2\f3") == atoi("1\f2\f3"));
	REQUIRE(sln.myAtoi("+\f1") == atoi("+\f1"));
	REQUIRE(sln.myAtoi("\f-1") == atoi("\f-1"));
}

TEST_CASE("overflow", "[Solution]")
{
	string sMaxInt = std::to_string(INT_MAX);
	string sMinInt = std::to_string(INT_MIN);
	long long maxOverflow = INT_MAX;
	long long minOverflow = INT_MIN;
	maxOverflow++;
	minOverflow--;
	string sMaxOverflow = std::to_string(maxOverflow);
	string sMinOverflow = std::to_string(minOverflow);
	REQUIRE(sln.myAtoi(sMaxInt) == atoi(sMaxInt.c_str()));
	REQUIRE(sln.myAtoi(sMinInt) == atoi(sMinInt.c_str()));
	//REQUIRE(sln.myAtoi(sMaxOverflow) == atoi(sMaxOverflow.c_str()));
	//REQUIRE(sln.myAtoi(sMinOverflow) == atoi(sMinOverflow.c_str()));
	REQUIRE(sln.myAtoi(sMaxOverflow) == INT_MAX);
	REQUIRE(sln.myAtoi(sMinOverflow) == INT_MIN);
}
