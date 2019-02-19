#include "../common.h"

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleLen = needle.size();
        if (!needleLen) {
            return 0;
        }
        int maxIndex = haystack.size() - needleLen;
        for (int index = 0; index <= maxIndex; index++) {
            bool ok = true;
            for (int i = 0; i < needleLen; i++) {
                if (haystack[index + i] != needle[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                return index;
            }
        }
        return -1;
    }
};