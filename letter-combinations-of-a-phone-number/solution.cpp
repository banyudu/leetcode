#include "../common.h"

const vector<string> digitMap = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

class Solution {
public:
    vector<string> result;
    void fillBuffer(const char *src, char *buffer, int index)
    {
        if (*src == '\0')
        {
            buffer[index] = '\0';
            if (*buffer != '\0')
                result.push_back(buffer);
            return;
        }
        for (auto ch: digitMap[*src - '0'])
        {
            buffer[index] = ch;
            fillBuffer(src + 1, buffer, index + 1);
        }
    }

    vector<string> letterCombinations(string digits) {
        string chopedDigits = digits;
        // chop '0' and '1' from input
        int bufferIndex = 0;
        for (int index = 0, len = digits.size(); index < len; index++)
        {
            char ch = digits[index];
            if (ch >= '2' && ch <= '9')
            {
                chopedDigits[bufferIndex++] = ch;
            }
        }
        chopedDigits[bufferIndex] = '\0';

        char buf[chopedDigits.size() + 1];
        fillBuffer(chopedDigits.c_str(), buf, 0);
        return result;
    }
};