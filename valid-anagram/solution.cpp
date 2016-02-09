#include "../common.h"

class Solution {
public:
    bool isAnagram(string s, string t) {
		int charsofs['z' + 1] = {0};
		int charsoft['z' + 1] = {0};
		/*
		int lenofs = s.size();
		int lenoft = t.size();
		if (lenofs != lenoft)
			return false;
		*/
		for (auto ch: s)
		{
			charsofs[ch]++;
		}
		
		for (auto ch: t)
		{
			charsoft[ch]++;
		}

		for (int index = 'a'; index <= 'z'; index++)
		{
			if (charsofs[index] != charsoft[index])
				return false;
		}
		return true;
    }
};
