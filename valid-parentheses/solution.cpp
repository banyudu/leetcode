#include "../common.h"

class Solution
{
  public:
    bool isValid(string s)
    {
        stack<char> unmatched;
        map<char, char> match = {
            pair<char, char>(')', '('),
            pair<char, char>(']', '['),
            pair<char, char>('}', '{'),
        };
        for (auto ch : s)
        {
            switch (ch)
            {
            case '[':
            case '(':
            case '{':
                unmatched.push(ch);
                break;
            case ')':
            case ']':
            case '}':
                if (!unmatched.size() || unmatched.top() != match[ch])
                {
                    return false;
                }
                unmatched.pop();
                break;
            }
        }
        return unmatched.size() == 0;
    }
};