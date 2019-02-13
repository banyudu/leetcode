#include "../common.h"

class Solution {
public:
    vector<vector<int>> fourSum(const vector<int>& nums, int target) {
        map<int, int> num2Count;
        for (auto num: nums) {
            num2Count[num]++;
        }
        return {};     
    }
};