#include "../common.h"

class Solution {
public:
    int myAtoi(string str) {
		const int error_value = 0;
		// error checks
		int len = str.length();
		if (0 == len)
			return error_value;
		long long ret = 0;
		int index = 0;
		bool bNegative = false;
		if ('+' == str[0] || '-' == str[0])
		{
			index = 1;
			bNegative = '-' == str[0];
		}

		// loop through index to len
		int v;
		for (int i = index; i < len; i++)
		{
			v = str[i] - '0';
			if (v < 0 || v > 9)
				return bNegative? -ret: ret;
			ret *= 10;
			ret += v;
			if (ret > INT_MAX)
				return error_value;
		}
		return bNegative? -ret: ret;
    }
};
