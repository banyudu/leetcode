#include "../common.h"

class Solution {
public:
    string countAndSay(int n) {
       if (n <= 0) {
           return "";
       } 
       return this->next("1", n - 1);
    }
private:
    string next(const string &s, int n) {
        if (n == 0) {
            return s;
        }
        char result[s.size() * 2 + 1];

        char value = s[0]; // s contains only '0' ~ '9'
        int count = 1;
        int index = 0;
        for (int i = 1, len = s.size(); i < len; i++) {
            if (s[i] == value) {
                count++;
            } else {
                string tmp = to_string(count);
                for (auto ch: tmp) {
                    result[index++] = ch;
                }
                result[index++] = value;
                value = s[i];
                count = 1;
            }
        }
        string tmp = to_string(count);
        for (auto ch: tmp) {
            result[index++] = ch;
        }
        result[index++] = value;
        result[index] = '\0';
        return this->next(result, n - 1);
    }
};