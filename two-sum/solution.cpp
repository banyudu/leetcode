#include "../common.h"
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
		unordered_map<int, int> value2index;
		int cur, another;
		for (int i = 1; i <= size; i++)
		{
			cur = nums[i - 1];
			another = target - cur;
			auto ptr = value2index.find(another);
			if (ptr != value2index.end())
			{
				return vector<int>({ptr->second, i});
			}
			value2index[cur] = i;								
		}
        return vector<int>();
    }
};
