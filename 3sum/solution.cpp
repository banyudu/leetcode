#include "../common.h"
class Solution {
public:
    vector<vector<int>> threeSum(const vector<int>& nums) {
		unordered_map<int, int> value2count;
		for (auto num: nums)
			value2count[num]++;

		// save sorted result in map/set
		unordered_map<int, unordered_set<int>> resultMap;
		vector<int> triplet(3);
		for (auto &fst: value2count)
		{
			fst.second--;
			for (auto &sec: value2count)
			{
				if (!sec.second)
					continue;
				sec.second--;
				int third = 0 - fst.first - sec.first;
				auto ptr = value2count.find(third);
				if (ptr != value2count.end() && ptr->second)
				{
					triplet[0] = fst.first;
					triplet[1] = sec.first;
					triplet[2] = third;
					std::sort(triplet.begin(), triplet.end());
					resultMap[triplet[0]].insert(triplet[1]);
				}
				sec.second++;
			}
			fst.second++;
		}

		vector<vector<int>> result;
		for (auto &item: resultMap)
		{
			for (auto &sec: item.second)
			{
				result.push_back({item.first, sec, 0 - item.first - sec});
			}
		}
		return result;
    }
};
