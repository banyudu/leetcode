#include "../common.h"
class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
		int arrSize = strs.size();
		if (arrSize == 0)
			return "";

		// get max length of result( min length of strings in vector)
		int maxLen = strs[0].length();
		for (int i = 1; i < arrSize; i++)
		{
			int len = strs[i].length();
			if (len < maxLen)
				maxLen = len;
		}

		// loop and compare
		int retLen = 0;
		const string &src = strs[0];
		for (; retLen < maxLen; retLen++)
		{
			char ch = src[retLen];
			for (int i = 1; i < arrSize; i++)
			{
				if (strs[i][retLen] != ch)
					return src.substr(0, retLen);
			}
		}
		return src.substr(0, retLen);
    }
};
