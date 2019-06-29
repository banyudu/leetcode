#include "../common.h"
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> staging;
        unordered_set<string> uniqSet;

        sort(candidates.begin(), candidates.end());
        this->_combinationSum(candidates, -1, target, results, staging, uniqSet);
        return results;
    }

    void _combinationSum(vector<int> &candidates, int candidatesIndex, int target, vector<vector<int>> &results, vector<int> &staging, unordered_set<string> &uniqSet) {
        if (target > 0) {
            for (unsigned i = candidatesIndex + 1; i < candidates.size(); i++) {
                staging.push_back(candidates[i]);
                this->_combinationSum(candidates, i, target - candidates[i], results, staging, uniqSet);
                staging.pop_back();
            }
        } else if (target == 0) {
            string key;
            for (auto val: staging) {
                key += val;
            }
            if (uniqSet.find(key) == uniqSet.end()) {
                uniqSet.insert(key);
                results.push_back(staging);
            }
        }
    }
};