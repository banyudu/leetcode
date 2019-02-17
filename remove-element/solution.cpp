#include "../common.h"

class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        int index = 0;
        for (int i = 0, len = nums.size(); i < len; i++)
        {
            if (nums[i] != val)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};