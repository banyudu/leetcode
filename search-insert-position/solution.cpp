#include "../common.h"

class Solution
{
  public:
    int searchInsert(const vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        if (nums[left] >= target)
        {
            return left;
        }
        if (nums[right] == target)
        {
            return right;
        }
        while (left < right - 1)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
        }
        if (nums[left] > target)
        {
            return left;
        }
        else if (nums[right] < target)
        {
            return right + 1;
        }
        else
        {
            return right;
        }
    }
};