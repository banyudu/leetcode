#include "../common.h"

class Solution
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() <= 1)
        {
            return nums.size();
        }

        int index = 1;
        for (int i = 1, len = nums.size(); i < len; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};