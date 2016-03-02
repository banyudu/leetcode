#include "../common.h"

class Solution {
public:
    bool isPalindrome(int x) {
		// use long long to store abs value, avoid overflow of abs(INT_MIN)
		if (x < 0)
			return false;
		int level = 1;
		// level is character count for x, for example: 123's level is 3, 98's level is 2
		int tmp = x;
		while ((tmp = tmp / 10))
			level++;

		// store 10's pows to array, to avoid duplicate compete
		long long pows10[level + 1];
		pows10[0] = 1;
		// store pows of 10
		for (int i = 1; i <= level; i++)
			pows10[i] = pows10[i - 1] * 10;

		// start compare
		int halfLevel = level / 2;
		for (int i = 0; i < halfLevel; i++)
		{
			// left is the higher bit, right is the lower bit
			int left = (x % pows10[level - i]) / pows10[level - i - 1];
			int right = (x % pows10[i + 1]) / pows10[i];
			if (left != right)
				return false;
		}
		return true;
    }
};
