#include "../common.h"

class Solution
{
  public:
    bool repeatedSubstringPattern(string s)
    {
        int len = s.size();
        int max = len / 2;
        for (int subLen = 1; subLen <= max; subLen++)
        {
            if (len % subLen == 0)
            {
                int times = len / subLen;
                bool ok = true;
                for (int i = 1; i < times; i++)
                {
                    for (int j = 0; j < subLen; j++)
                    {
                        if (s[j] != s[j + i * subLen])
                        {
                            ok = false;
                            break;
                        }
                    }
                    if (!ok)
                    {
                        break;
                    }
                }
                if (ok)
                {
                    return true;
                }
            }
        }
        return false;
    }
};