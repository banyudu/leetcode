#include "../common.h"

class Solution
{
  public:
    vector<vector<int>> fourSum(const vector<int> &nums, int target)
    {
        // value to count hash
        unordered_map<int, int> num2Count;
        for (auto num : nums)
        {
            num2Count[num]++;
        }

        vector<vector<int>> result;
        unordered_set<string> duplicates;

        // loop through hash
        for (auto &l1 : num2Count)
        {
            l1.second--;
            for (auto &l2 : num2Count)
            {
                if (l2.second)
                {
                    l2.second--;
                    for (auto &l3 : num2Count)
                    {
                        if (l3.second)
                        {
                            l3.second--;
                            int toMatch = target - l1.first - l2.first - l3.first;
                            auto search = num2Count.find(toMatch);
                            if (search != num2Count.end() && search->second > 0)
                            {
                                // find a solution
                                vector<int> solution = {l1.first, l2.first, l3.first, toMatch};
                                sort(solution.begin(), solution.end());
                                auto id = std::to_string(solution[0]) + ',' + std::to_string(solution[1]) + ',' + std::to_string(solution[2]) + ',' + std::to_string(solution[3]);
                                if (duplicates.find(id) == duplicates.end())
                                {
                                    duplicates.insert(id);
                                    result.push_back(solution);
                                }
                            }
                            l3.second++;
                        }
                    }
                    l2.second++;
                }
            }
            l1.second++;
        }
        return result;
    }
};