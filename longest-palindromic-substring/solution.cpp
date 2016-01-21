#include "../common.h"

class Solution {
public:
    string longestPalindrome(string s) {
		if (s.empty())
			return "";
		int longestSize = 1;
		int start = 0;
		int size = s.size();
		bool arr[size][size] = {false};

		// every char is a palindrome of one size
		for (int i = 0; i < size; i++)
			arr[i][i] = true;

		// size two
		for (int i = 1; i < size; i++)
			if (s[i] == s[i - 1])
			{
				arr[i - 1][i] = true;
				start = i - 1;
				if (longestSize < 2)
					longestSize = 2;
			}

		bool flag[2];
		flag[1] = true;
		flag[0] = longestSize == 2;
		for (int level = 3; level <= size; level++)
		{
			int flagIndex = level % 2;
			flag[flagIndex] = false;
			for (int i = level - 1; i < size; i++)
			{
				if (arr[i - level + 2][i - 1] && s[i - level + 1] == s[i])
				{
					arr[i - level + 1][i] = true;
					start = i - level + 1;
					flag[flagIndex] = true;
					longestSize = level;
				}
			}
			if (!(flag[0] || flag[1]))
				break;
		}
		return s.substr(start, longestSize);
    }
};
