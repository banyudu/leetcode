#include "../common.h"

class Solution
{
  public:
    int countPrimes(int n)
    {
        int result = 0;
        bool isPrime[n + 1];
        std::fill_n(isPrime, n + 1, true);
        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                result++;
                int max = n / i;
                for (int j = i; j <= max; j++)
                {
                    isPrime[i * j] = false;
                }
            }
        }
        return result;
    }
};