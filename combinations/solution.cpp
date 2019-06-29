#include "../common.h"

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> staging;
        this->combine(n, k, staging, result);
        return result;
    }

    void combine(int n, int k, vector<int> &staging, vector<vector<int>> &result) {
       if (static_cast<int>(staging.size()) >= k) {
           result.push_back(staging);
           return;
       }
       if (n < 1) {
           return;
       }

       // without current element
       this->combine(n - 1, k, staging, result);

       // with current element
       staging.push_back(n);
       this->combine(n - 1, k, staging, result);
       staging.pop_back();
    }
};