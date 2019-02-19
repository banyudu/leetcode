#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.reverseWords("Let's take LeetCode contest") == "s'teL ekat edoCteeL tsetnoc");
    REQUIRE(sln.reverseWords("1 2 3 4 5") == "1 2 3 4 5");
    REQUIRE(sln.reverseWords(" ") == " ");
    REQUIRE(sln.reverseWords("a") == "a");
    REQUIRE(sln.reverseWords("") == "");
}
