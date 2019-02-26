#include "../common.h"

class Solution {
public:
    vector<int> findSubstring(string s, const vector<string>& words) {
        vector<int> result;
        int wordCount = words.size();
        if (s.size() && wordCount && words[0].size()) {
            int wordLen = words[0].size();
            unordered_map<string, int> word2Count;
            for (auto &word: words) {
                word2Count[word]++;
            }

            int maxStartPoint = s.size() - wordCount * wordLen;
            for (int start = 0; start <= maxStartPoint; start++) {
                unordered_map<string, int> tmp = word2Count;
                int i = 0;
                for (; i < wordCount; i++) {
                    string toFind = s.substr(start + i * wordLen, wordLen);
                    if (tmp[toFind]) {
                        tmp[toFind]--;
                    } else {
                        break;
                    }
                }
                if (i == wordCount) {
                    result.push_back(start);
                }
            }
        }
        return result;
    }
};

// ----- below is a slow solution ---  

// #include "../common.h"
// #include "../utils.hpp"

// class Solution
// {
//   public:
//     vector<int> findSubstring(string s, const vector<string> &words)
//     {
//         vector<int> result;
//         if (s.size() && words.size() && words[0].size())
//         {
//             unordered_map<string, vector<int>> word2Indexes;

//             // find all matches for each word
//             for (int i = 0, len = words.size(); i < len; i++)
//             {
//                 auto findRes = word2Indexes.find(words[i]);
//                 if (findRes == word2Indexes.end()) {
//                     vector<int> indexes;
//                     size_t index = s.find(words[i]);
//                     while (index != string::npos)
//                     {
//                         indexes.push_back(index);
//                         index = s.find(words[i], index + 1);
//                     }
//                     word2Indexes[words[i]] = indexes;
//                 }
//             }

//             // 遍历处理
//             vector<int> matches(words.size());
//             this->getSuccessiveMatches(result, word2Indexes, matches, words, 0);
//         }
//         return result;
//     }

//   private:
//     void getSuccessiveMatches(vector<int> &result, unordered_map<string, vector<int>> &word2Indexes, vector<int> &matches,  const vector<string> &words, int level)
//     {
//         int wordLen = words[0].size();
//         if (level < words.size()) { // not end
//             for (auto item: word2Indexes[words[level]]) {
//                 if (!level || ((item - matches[0]) % wordLen == 0 && (item - matches[0] != 0))) { // (a - b) % wordLen == 0
//                     matches[level] = item;
//                     this->getSuccessiveMatches(result, word2Indexes, matches, words, level + 1);
//                 }
//             }
//         } else { // end
//             vector<int> tmp = matches;
//             sort(tmp.begin(), tmp.end());
//             for (int i = 1, len = tmp.size(); i < len; i++) {
//                 if (tmp[i] - tmp[i - 1] != wordLen) {
//                     return;
//                 }
//             }
//             if (find(result.begin(), result.end(), tmp[0]) == result.end()) {
//                 result.push_back(tmp[0]);
//             }
//         }
//     }
// };