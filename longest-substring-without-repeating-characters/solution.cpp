#include "../common.h"

class Solution {
public:
    int lengthOfLongestSubstring(const string &s) {
		unordered_map<char, int> usedCharIndexes;
		int ret = 0;
		int size = s.size();
		int begin = 1; // current substring begin position
		int last; // last position for each char
		char ch;
		for (int i = 0; i < size;)
		{
			ch = s[i++];
			last = usedCharIndexes[ch];
			if (last >= begin)
			{
				ret = std::max(ret, i - begin);
				begin = last + 1;
			}
			usedCharIndexes[ch] = i;
		}
		return std::max(ret, size - begin + 1);
    }
};
