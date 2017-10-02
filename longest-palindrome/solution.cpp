#include "../common.h"

class Solution {
public:
    int longestPalindrome(string s)
    {
        int sum = 0;
        unordered_set<char> set;
        for (auto ch: s)
        {
            if (set.find(ch) != set.end())
            {
                set.erase(ch);
                sum += 2;
            }
            else
            {
                set.insert(ch);
            }
        }
        if (!set.empty()) {
            sum += 1;
        }
        return sum;
    }
};