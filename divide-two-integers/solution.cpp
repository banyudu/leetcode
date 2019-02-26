#include "../common.h"

/* not accepted */

class Solution
{
public:
  int divide(int dividend, int divisor)
  {
    if (!dividend || !divisor)
    {
      return 0;
    }
    if (dividend == -2147483648 && divisor == -1) {
      return 2147483647;
    }
    return this->_divide(dividend > 0 ? -dividend : dividend, divisor > 0 ? -divisor : divisor, (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0));
  }

private:
  int _divide(int dividend, int divisor, bool negative)
  {
    // dividend and divisor are both negative values
    int result = 0;
    while (dividend <= divisor)
    {
      dividend -= divisor;
      result++;
    }
    return negative ? -result : result;
  }
};