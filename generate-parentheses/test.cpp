#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;


TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.generateParenthesis(3), {
        "((()))",
        "(()())",
        "(())()",
        "()(())",
        "()()()"
    }));

    REQUIRE(Utils::isEqual(sln.generateParenthesis(4), {
        "(((())))",
        "((()()))",
        "((())())",
        "((()))()",
        "(()(()))",
        "(()()())",
        "(()())()",
        "(())(())",
        "(())()()",
        "()((()))",
        "()(()())",
        "()(())()",
        "()()(())",
        "()()()()"
    }));

    REQUIRE(Utils::isEqual(sln.generateParenthesis(0), {
        "",
    }));

    REQUIRE(Utils::isEqual(sln.generateParenthesis(1), {
        "()",
    }));
}

