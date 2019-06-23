#include "../common.h"

class Solution {
public:
    vector<int> searchRange(const vector<int>& nums, int target) {
        if (!nums.size()) {
            return { -1, -1 };
        }
        int left = 0;
        int right = nums.size() - 1;
        if (nums[left] == target || nums[right] == target) {
            return { this->findEdge(nums, target, left, right, true), this->findEdge(nums, target, left, right, false) };
        }
        while (left < right - 1) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return { this->findEdge(nums, target, left, mid, true), this->findEdge(nums, target, mid, right, false) };
            }
            else if (nums[mid] > target) {
                right = mid;
            } else {
                left = mid;
            }
        }
        return { -1, -1 };
    }

    int findEdge (const vector<int>& nums, int target, int left, int right, bool findLeft) {
        if (nums[left] == nums[right]) {
            return findLeft ? left : right;
        }
        while (left < right - 1) {
            cout << "left: " << left << ", right: " << right << endl;
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid;
            } else if (nums[mid] > target) {
                right = mid;
            } else {
                if (findLeft) {
                    right = mid;
                } else {
                    left = mid;
                }
            }
        }
        return findLeft
            ? nums[left] == target ? left : left + 1
            : nums[right] == target ? right:  right - 1;
    }
};