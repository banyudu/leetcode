#include "../common.h"

class Solution {
public:
    bool isPowerOfThree(int n) {
		if (n < 1)
			return false;
		else if (n == 1)
			return true;
		while (n > 1)
		{
			if (n % 3 != 0)
				return false;
			n /= 3;
		}
		return true;
    }
};
