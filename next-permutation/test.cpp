#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    vector<int> n1({1,2,3}), n2({3,2,1}), n3({1,1,5}), n4({}), n5({1,3,2}), n6({1,3,2,1});
    sln.nextPermutation(n1);
    sln.nextPermutation(n2);
    sln.nextPermutation(n3);
    sln.nextPermutation(n4);
    sln.nextPermutation(n5);
    sln.nextPermutation(n6);

    REQUIRE(n1 == vector<int>({1,3,2}));
    REQUIRE(n2 == vector<int>({1,2,3}));
    REQUIRE(n3 == vector<int>({1,5,1}));
    REQUIRE(n4 == vector<int>({}));
    REQUIRE(n5 == vector<int>({2,1,3}));
    REQUIRE(n6 == vector<int>({2,1,1,3}));
}
