#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.isValid("()") == true);
    REQUIRE(sln.isValid("()[]{}") == true);
    REQUIRE(sln.isValid("(]") == false);
    REQUIRE(sln.isValid("([)]") == false);
    REQUIRE(sln.isValid("{[]}") == true);
    REQUIRE(sln.isValid("}") == false);
}

TEST_CASE("empty values", "[Solution]")
{
    REQUIRE(sln.isValid("") == true);
    REQUIRE(sln.isValid("abc") == true);
}