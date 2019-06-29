#include "../common.h"
class Solution {
public:
    vector<vector<int>> combinationSum(const vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> staging;
        this->_combinationSum(candidates, 0, target, results, staging);
        return results;
    }

    void _combinationSum(const vector<int> &candidates, int candidatesIndex, int target, vector<vector<int>> &results, vector<int> &staging) {
        if (target > 0) {
            for (unsigned i = candidatesIndex; i < candidates.size(); i++) {
                staging.push_back(candidates[i]);
                this->_combinationSum(candidates, i, target - candidates[i], results, staging);
                staging.pop_back();
            }
        } else if (target == 0) {
            results.push_back(staging);
        }
    }
};