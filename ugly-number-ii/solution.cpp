#include "../common.h"

class Solution
{
  public:
    int nthUglyNumber(int n)
    {
        if (n <= 0) { return 0; }
        if (n == 1) { return 1; }
        vector<int> uglyNumbers;
        uglyNumbers.push_back(1);
        int p2 = 0, p3 = 0, p5 = 0;
        while(true) {
            int next = min(min(uglyNumbers[p2] * 2, uglyNumbers[p3] * 3), uglyNumbers[p5] * 5);
            uglyNumbers.push_back(next);
            if (uglyNumbers.size() == n) { return next; }
            if (next % 2 == 0) { p2++; }
            if (next % 3 == 0) { p3++; }
            if (next % 5 == 0) { p5++; }
        }
        return 0;
    }
};