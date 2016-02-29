#include "../common.h"

class Solution {
public:
    int reverse(int x) {
		long long ret = 0;
		while (x != 0)
		{
			ret *= 10;
			ret += x % 10;
			x /= 10;
		}

		if (abs(ret) > INT_MAX)
			return 0;

		return ret;
    }
};
