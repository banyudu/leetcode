#ifndef _UTILS_HPP_
#define _UTILS_HPP_

#include <iostream>
#include <algorithm>
#include "common.h"

class Utils
{
  public:
    static string join(const vector<int> &vec)
    {
        vector<string> strVec;
        for (auto num : vec)
        {
            strVec.push_back(to_string(num));
        }
        return Utils::join(strVec);
    }

    static string join(const vector<string> &arr)
    {
        string result = "";
        for (auto str : arr)
        {
            result += str + ',';
        }
        return result.size() ? result.substr(0, result.size() - 1) : "";
    }

    static string vector2SortedString(vector<int> vec)
    {
        sort(vec.begin(), vec.end());
        return Utils::join(vec);
    }

    static string vector2SortedString(vector<vector<int>> vec)
    {
        vector<string> firstStepResult;
        for (auto subVec : vec)
        {
            firstStepResult.push_back(Utils::vector2SortedString(subVec));
        }
        sort(firstStepResult.begin(), firstStepResult.end());
        return Utils::join(firstStepResult);
    }

    static bool isEqual(const vector<vector<int>> &left, const vector<vector<int>> &right)
    {
        // convert to string
        string leftStr = Utils::vector2SortedString(left);
        string rightStr = Utils::vector2SortedString(right);
        return leftStr == rightStr;
    }

    static bool isEqual(vector<string> left, vector<string> right)
    {
        // convert to string
        if (left.size() != right.size())
        {
            return false;
        }
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());

        int len = left.size() - 1;
        while (len >= 0)
        {
            if (left[len] != right[len])
            {
                return false;
            }
            len--;
        }
        return true;
    }

    static bool isEqual(ListNode* left, ListNode* right)
    {
        if (!left && !right) {
            return true;
        }

        if (!left || !right || left->val != right->val) {
            return false;
        }

        return Utils::isEqual(left->next, right->next);
    }

    static ListNode* getList(vector<int> numbers) {
        // do not care memory leak
        ListNode* result = nullptr;
        for (int i = numbers.size() - 1; i >= 0; i--) {
            ListNode* tmp = new ListNode(numbers[i]);
            tmp->next = result;
            result = tmp;
        }
        return result;
    }
};

#endif