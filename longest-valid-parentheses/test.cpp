#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.longestValidParentheses("") == 0);
    REQUIRE(sln.longestValidParentheses("(()") == 2);
    REQUIRE(sln.longestValidParentheses("(") == 0);
    REQUIRE(sln.longestValidParentheses("((())") == 4);
    REQUIRE(sln.longestValidParentheses(")()())") == 4);
    REQUIRE(sln.longestValidParentheses("(()()") == 4);
}
