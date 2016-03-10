#include "../common.h"

// ideas from post https://leetcode.com/discuss/89653/share-my-c-solution-easy-to-understand

class Solution {
public:
    int maxArea(const vector<int>& height) {
		int size = height.size();

		// at least two elements
		if (size < 2)
			return 0;

		int result = 0;
		int left = 0;
		int right = size - 1;

		// skip values less than 1
		while (left < right && height[left] < 1)
			left++;
		while (left < right && height[right] < 1)
			right--;

		int lValue; // value at current left index
		int rValue; // value at current right index
		while (left < right)
		{
			lValue = height[left];
			rValue = height[right];
			result = max(result, (right - left) * min(lValue, rValue));

			if (lValue < rValue)
			{
				left++;
				// skip values which make no sense on left side
				while (left < right && height[left] <= lValue)
					left++;
			}
			else
			{
				right--;
				// skip values on right side
				while (left < right && height[right] <= rValue)
					right--;
			}
		}
		return result;
    }
};
