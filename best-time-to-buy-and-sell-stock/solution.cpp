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
        int last = result;
        for (int i = 2; i < prices.size(); i++)
        {
            int diff = prices[i] - prices[i - 1];
            last = last > 0 ? last + diff : diff;
            result = max(result, last);
        }
        return result > 0 ? result : 0;
    }
};