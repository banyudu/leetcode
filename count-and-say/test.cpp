#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(sln.countAndSay(1) == "1");
    REQUIRE(sln.countAndSay(2) == "11");
    REQUIRE(sln.countAndSay(3) == "21");
    REQUIRE(sln.countAndSay(4) == "1211");
    REQUIRE(sln.countAndSay(5) == "111221");
}
