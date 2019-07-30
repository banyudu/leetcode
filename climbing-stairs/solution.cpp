#include "../common.h"

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0) {
            return 0;
        }

        int buf[2] = {2, 1};
        for (int i = 3; i <= n; i++) {
            buf[i % 2] = buf[0] + buf[1];
        }
        return buf[n % 2];
    }
};