#include "../common.h"

class Solution {
public:
    string convert(string s, int numRows) {
		if (numRows <= 1)
			return s;
		int len = s.length();
		char dst[len + 1];
		dst[len] = '\0';
		int factor = 2 * numRows - 2; // factor in a cycle
		int index = 0; // dst index
		for (int row = 0; row < numRows; row++)
		{
			// append items to dst row by row
			int itemCountInSameCycle =  (0 == row || numRows - 1 == row)? 1: 2;
			int itemIndexArray[itemCountInSameCycle];
			for (int cycle = 0; ; cycle++)
			{
				// push item indexes in one cycle to array
				itemIndexArray[0] = cycle * factor + row;
				if (itemCountInSameCycle == 2)
				{
					itemIndexArray[1] = (cycle + 1) * factor - row;
				}
				// loop array, insert value to dst
				for (int i = 0; i < itemCountInSameCycle; i++)
				{
					if (itemIndexArray[i] >= len)
						break;
					dst[index++] = s[itemIndexArray[i]];
				}
				if (itemIndexArray[itemCountInSameCycle - 1] >= len)
					break;
			}
		}
		return dst;
    }
};
