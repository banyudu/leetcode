#include "../common.h"

class Solution {
public:
    int threeSumClosest(const vector<int>& tmpnums, int target) {
		auto nums = tmpnums;
		int size = nums.size();
		if (size < 3)
			return 0;
		std::sort(nums.begin(), nums.end());
		int diff = INT_MAX;
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				int toFind = target - nums[i] - nums[j];
				for (int start = j + 1, end = size - 1; start <= end;)
				{
					int index = (start + end) / 2;
					if (index == start)
					{
						// find complete
						int startDiff = toFind - nums[start];
						if (std::abs(startDiff) < diff)
						{
							diff = std::abs(startDiff);
							result = target - startDiff;
						}
						if (end != start)
						{
							int endDiff = toFind - nums[end];
							if (std::abs(endDiff) < diff)
							{
								diff = std::abs(endDiff);
								result = target - endDiff;
							}
						}
						break;
					}
					else
					{
						int indexValue = nums[index];
						if (indexValue == toFind)
							return target;
						else if (indexValue < toFind)
						{
							start = index;
						}
						else
						{
							end = index;
						}
					}
				}
				if (nums[j] > toFind)
					break;
			}
		}
		return result;
    }
};
