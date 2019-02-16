#include "../common.h"

class Solution
{
  public:
    vector<string> generateParenthesis(int n)
    {
        auto result = this->_innerGen(n, "", 0);
        return result;
    }

  private:
    // n 来自 generateParenthesis, prefix 是已经选择的前缀, diff 是左括号数 - 右括号数
    vector<string> _innerGen(int n, string prefix, int diff)
    {
        if (prefix.length() == n * 2)
        {
            return {prefix};
        }
        vector<string> leftChild, rightChild;
        if (diff)
        {
            rightChild = this->_innerGen(n, prefix + ")", diff - 1);
        }
        if (prefix.length() + diff < n * 2)
        {
            leftChild = this->_innerGen(n, prefix + "(", diff + 1);
        }
        vector<string> result;
        result.reserve(leftChild.size() + rightChild.size());
        result.insert(result.end(), leftChild.begin(), leftChild.end());
        result.insert(result.end(), rightChild.begin(), rightChild.end());
        return result;
    }
};