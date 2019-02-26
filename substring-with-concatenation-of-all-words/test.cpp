#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "../utils.hpp"
#include "solution.cpp"

Solution sln;

TEST_CASE("normal values", "[Solution]")
{
    REQUIRE(Utils::isEqual(sln.findSubstring("barfoothefoobarman", {"foo","bar"}), {0, 9}));
    REQUIRE(Utils::isEqual(sln.findSubstring("wordgoodgoodgoodbestword", {"word","good","best","word"}), {}));
    REQUIRE(Utils::isEqual(sln.findSubstring("", {"foo","bar"}), {}));
    REQUIRE(Utils::isEqual(sln.findSubstring("", {"foo"}), {}));
    REQUIRE(Utils::isEqual(sln.findSubstring("barfoothefoobarman", {"foo"}), {3, 9}));
    REQUIRE(Utils::isEqual(sln.findSubstring("wordgoodgoodgoodbestword", {"word","good","best","good"}), {8}));
}
