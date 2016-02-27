#include "../common.h"

class Solution {
public:
    int reverse(int x) {
		bool bNegative = false;
		if (x < 0)
		{
			bNegative = true;
			x = -x;
		}
		long long ret = 0;
		while (x > 0)
		{
			ret *= 10;
			ret += x % 10;
			x /= 10;
		}

		if (ret > INT_MAX)
			return 0;

		return bNegative? -ret: ret;
    }
};
