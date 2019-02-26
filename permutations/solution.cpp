#include "../common.h"

class Solution
{
  public:
    vector<vector<int>> permute(const vector<int> &nums)
    {
        vector<int> intermediate;
        unordered_set<int> used;
        vector<vector<int>> result;
        this->permute(result, nums, intermediate, used);
        return result;
    }

  private:
    void permute(vector<vector<int>> &result, const vector<int> &nums, vector<int> &intermediate, unordered_set<int> &used)
    {
        if (intermediate.size() == nums.size()) {
            result.push_back(intermediate);
            return;
        }
        for (auto item: nums) {
            if (used.find(item) == used.end()) {
                intermediate.push_back(item);
                used.insert(item);
                this->permute(result, nums, intermediate, used);
                intermediate.pop_back();
                used.erase(item);
            }
        }
    }
};