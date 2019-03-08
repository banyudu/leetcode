#include "../common.h"

class Solution
{
  public:
    int search(const vector<int> &nums, int target)
    {
        if (!nums.size())
        {
            return -1;
        }
        int left = 0, right = nums.size() - 1;
        if (nums[left] == target)
        {
            return left;
        }
        if (nums[right] == target)
        {
            return right;
        }

        while (left < right - 1)
        {
            int next = (left + right) / 2;
            if (nums[next] == target)
            {
                return next;
            }
            if (nums[left] < nums[right]) {
                // asc
                if (nums[left] > target || nums[right] < target) {
                    return -1;
                }
                if (nums[next] < target) {
                    left = next;
                } else {
                    right = next;
                }
            } else {
                // mixed
                if (nums[next] > nums[left]) {
                    // left to next is asc
                    if (nums[next] > target && nums[left] < target) {
                        right = next;
                    } else {
                        left = next;
                    }
                } else {
                    // next to right is asc
                    if (nums[next] < target && nums[right] > target) {
                        left = next;
                    } else {
                        right = next;
                    }
                }
            }
        }
        if (left == right)
        {
            return nums[left] == target ? left : -1;
        }
        return -1;
    }
};