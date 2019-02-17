#include "../common.h"

class Solution
{
  public:
    bool isHappy(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        unordered_set<int> exists;
        return this->_isHappy(n, exists);
    }

  private:
    bool _isHappy(int n, unordered_set<int> &exists)
    {
        if (n == 1)
        {
            return true;
        }
        if (exists.find(n) != exists.end())
        {
            return false;
        }
        exists.insert(n);
        int next = this->convert(n);
        return this->_isHappy(next, exists);
    }

    int convert(int n)
    {
        int result = 0;
        while (n > 0)
        {
            int tmp = n % 10;
            result += tmp * tmp;
            n /= 10;
        }
        return result;
    }
};