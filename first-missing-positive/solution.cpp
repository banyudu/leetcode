#include "../common.h"

class Solution {
public:
    int firstMissingPositive(const vector<int>& nums) {
        vector<int> tmpNums(nums);
        int len = tmpNums.size();
        for (int i = 0; i < len; i++) {
            // in range, and swapable
            while (tmpNums[i] > 0 && tmpNums[i] <= len && tmpNums[i] != tmpNums[tmpNums[i] - 1]) {
                // swap tmpNumbs[i] and tmpNums[tmpNums[i] - 1], put value in right index
                std::swap(tmpNums[i], tmpNums[tmpNums[i] - 1]);
            }
        }

        // iterate
        for (int i = 0; i < len; i++) {
            if (tmpNums[i] != i + 1) {
                return i + 1;
            }
        }
        return len + 1;
    }
};