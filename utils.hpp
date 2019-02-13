#include <iostream>
#include <algorithm>
using namespace std;

class Utils {
public:
    static string join (const vector<int> & vec) {
        vector<string> strVec;
        for (auto num: vec) {
            strVec.push_back(to_string(num));
        }
        return Utils::join(strVec);
    }

    static string join (const vector<string> & arr) {
        string result = "";
        for (auto str: arr) {
            result += str+ ',';
        }
        return result.size() ? result.substr(0, result.size() - 1) : "";
    }

    static string vector2SortedString (vector<int> vec) {
        sort(vec.begin(), vec.end());
        return Utils::join(vec);
    }

    static string vector2SortedString (vector<vector<int>> vec) {
        vector<string> firstStepResult;
        for (auto subVec: vec) {
            firstStepResult.push_back(Utils::vector2SortedString(subVec));
        }
        sort(firstStepResult.begin(), firstStepResult.end());
        return Utils::join(firstStepResult);
    }

    static bool isEqual (const vector<vector<int>>& left, const vector<vector<int>>& right) {
        // convert to string
        string leftStr = Utils::vector2SortedString(left);
        string rightStr = Utils::vector2SortedString(right);
        return leftStr == rightStr;
    }
};