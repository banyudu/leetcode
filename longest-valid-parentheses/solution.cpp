#include "../common.h"

class Solution
{
  public:
    int longestValidParentheses(string s)
    {
        int result = 0;
        unordered_map<int, int> index2Size;
        stack<int> leftParentheses;
        for (int i = 0, len = s.size(); i < len; i++)
        {
            if (s[i] == '(')
            {
                leftParentheses.push(i);
            }
            else
            {
                if (leftParentheses.size())
                {
                    // not empty
                    int leftIndex = leftParentheses.top();
                    leftParentheses.pop();
                    int len = i - leftIndex + 1 + index2Size[leftIndex - 1];
                    index2Size[i] = len;
                    result = max(result, len);
                }
            }
        }
        return result;
    }
};