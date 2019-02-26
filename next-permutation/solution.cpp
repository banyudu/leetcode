#include "../common.h"

class Solution
{
  public:
    void nextPermutation(vector<int> &nums)
    {
        int begin = 0;
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                for (int j = nums.size() - 1; j >= i; j--) {
                    if (nums[j] > nums[i - 1]) {
                        int tmp = nums[i - 1];
                        nums[i - 1] = nums[j];
                        nums[j] = tmp;
                        begin = j == i - 1 ? i + 1 : i;
                        break;
                    }
                }
                break;
            }
        }
        sort(nums.begin() + begin, nums.end());
    }
};