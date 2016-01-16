#include "../common.h"
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int size = nums.size();
		unordered_map<int, int> value2index;
		int cur, another;
		for (int i = 1; i <= size; i++)
		{
			cur = nums[i - 1];
			if (value2index.find(cur) == value2index.end())
			{
				another = target - cur;
				if (another != cur)
				{
					auto ptr = value2index.find(another);
					if (ptr != value2index.end())
					{
						int v = ptr->second;
						if (i > v)
							std::swap(v, i);
						ret.push_back(i);
						ret.push_back(v);
						return ret;
					}
				}
				value2index[cur] = i;				
			}
			else if (cur + cur == target)
			{
				ret.push_back(value2index[cur]);
				ret.push_back(i);
				return ret;
			}
		}

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
