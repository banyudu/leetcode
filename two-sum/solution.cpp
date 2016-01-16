#include "../common.h"
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int size = nums.size();
		unordered_map<int, int> value2index;
		for (int i = 1; i <= size; i++)
		{
			int value = nums[i - 1];
			if (value2index.find(value) == value2index.end())
			{
				value2index[value] = i;
			}
			else if (value + value == target)
			{
				ret.push_back(value2index[value]);
				ret.push_back(i);
				return ret;
			}
		}
		int cur, another;
		for (auto item: value2index)
		{
			cur = item.first;
			another = target - cur;
			if (another == cur)
				continue;
			auto ptr = value2index.find(another);
			if (ptr != value2index.end())
			{
				int v1 = item.second;
				int v2 = ptr->second;
				if (v1 > v2)
					std::swap(v1, v2);
				ret.push_back(v1);
				ret.push_back(v2);
				return ret;
			}
		}
        return ret;
    }
};
