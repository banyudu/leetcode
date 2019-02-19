#include "../common.h"

class Solution
{
  public:
    void reverseString(vector<char> &s)
    {
        int head = 0;
        int tail = s.size() - 1;
        char tmp;
        while (head < tail)
        {
            tmp = s[head];
            s[head] = s[tail];
            s[tail] = tmp;
            head++;
            tail--;
        }
    }
};