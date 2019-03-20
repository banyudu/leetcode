#include "../common.h"

class Solution
{
  public:
    int maxProfit(const vector<int> &prices)
    {
        if (prices.size() <= 1)
        {
            return 0;
        }
        int result = prices[1] - prices[0];
        int last[3] = {0, 0, 0};
        bool used = false;
        for (int i = 1; i < prices.size(); i++)
        {
            int diff = prices[i] - prices[i - 1];
            int maxValueWithCur = diff + (used ? last[(i + 2) % 3] : last[i % 3]);
            last[i % 3] = max(maxValueWithCur, last[(i + 2) % 3]);
            used = maxValueWithCur == last[i % 3];
            result = max(result, last[i % 3]);
            cout << "cur: " << prices[i] << ", result: " << result << ", used: " << used << endl;
        }
        cout << endl << "============" << endl;
        return result > 0 ? result : 0;
    }
};