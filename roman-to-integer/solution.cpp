#include "../common.h"
class Solution {
public:
    int romanToInt(string s) {
		static unordered_map<char, int> ch2Value =
			{
				{'I', 1},
				{'V', 5},
				{'X', 10},
				{'L', 50},
				{'C', 100},
				{'D', 500},
				{'M', 1000}
			};
		int loopend = s.length() - 1;
		if (loopend < 0)
			return 0;
		int result = 0;
		int nextValue = ch2Value[s[0]];
		for (int i = 0; i < loopend; i++)
		{
			int curValue = nextValue;
			nextValue = ch2Value[s[i + 1]];

			// if current value is less than next value, then it is negative
			// else it is positive
			result += curValue < nextValue? -curValue: curValue;
		}
		result += ch2Value[s[loopend]];
		return result;
    }
};
