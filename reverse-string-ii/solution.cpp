#include "../common.h"

class Solution
{
  public:
    string reverseStr(string s, int k)
    {
        if (k <= 0)
        {
            return s;
        }
        int factor = 0;
        int head = 0;
        int len = s.size();
        while (head <= s.size())
        {
            int tail = min(len, head + k) - 1;
            char tmp;
            while (head < tail)
            {
                tmp = s[head];
                s[head] = s[tail];
                s[tail] = tmp;
                head++;
                tail--;
            }
            factor++;
            head = 2 * k * factor;
        }
        return s;
    }
};