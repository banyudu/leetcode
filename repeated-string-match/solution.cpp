#include "../common.h"

class Solution
{
  public:
    int repeatedStringMatch(string A, string B)
    {
        if (!A.size() || !B.size())
        {
            return -1;
        }
        string tmp(A);
        int min = ceil(B.size() * 1.0 / A.size());
        for (int i = 1; i < min; i++)
        {
            tmp += A;
        }

        // max: n + 1
        for (int i = 0; i < 2; i++)
        {
            if (tmp.find(B) != string::npos)
            {
                return min + i;
            }
            tmp += A;
        }
        return -1;
    }
};