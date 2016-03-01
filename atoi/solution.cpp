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
		while (index < len)
		{
			char ch = str[index];
			if (' ' == ch || '\t' == ch || '\n' == ch || '\r' == ch || '\f' == ch || '\v' == ch)
				index++;
			else
				break;
		}
		if (index == len)
			return error_value;

		if ('+' == str[index] || '-' == str[index])
		{
			bNegative = '-' == str[index++];
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
			//if ((bNegative && -ret < INT_MIN) || (!bNegative && ret > INT_MAX))
			//return error_value;
			if (bNegative && -ret < INT_MIN)
				return INT_MIN;
			if (!bNegative && ret > INT_MAX)
				return INT_MAX;
		}
		return bNegative? -ret: ret;
    }
};
