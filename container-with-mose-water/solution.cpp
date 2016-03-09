#include "../common.h"

class Solution {
public:
    int maxArea(const vector<int>& height) {
		unsigned int size = height.size();
		unsigned int result = 0;
		for (unsigned int i = 0; i < size; i++)
		{
			for (unsigned int j = i + 1; j < size; j++)
			{
				result = max(result,  (unsigned)((j - i) * min(height[i], height[j])));
			}
		}
		return result;
    }
};
