#include "../common.h"

class Solution
{
  public:
    string reverseWords(string s)
    {
        int len = s.size();
        int spaceIndex = -1;
        while (spaceIndex < len - 1)
        {
            int head = spaceIndex + 1;
            int tail = head;
            while (tail < len && s[tail] != ' ')
            {
                tail++;
            }
            spaceIndex = tail;
            tail -= 1;
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
        return s;
    }
};