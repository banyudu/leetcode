#include "../common.h"

class Solution
{
  public:
    int maxSubArray(const vector<int> &nums)
    {
        if (!nums.size())
        {
            return 0;
        }
        int result = nums[0];
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            last = last > 0 ? last + nums[i] : nums[i];
            result = max(result, last);
        }
        return result;
    }
};