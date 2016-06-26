#include "../common.h"
class Solution {
public:
	string intToRoman(int num) {
		const static vector<vector<string>> romanValues =
			{
				{"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
				{"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
				{"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
				{"M", "MM", "MMM"}
			};
		if (num < 1 || num > 3999)
			return "";
		string result;
		int level = 0;
		while (num > 0)
		{
			int mod = num % 10 - 1;
			if (mod >= 0)
			{
				result = romanValues[level][mod] + result;
			}
			num /= 10;
			level++;
		}
		return result;
	}
};
