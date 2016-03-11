#include "../common.h"

class Solution {
public:
    int calculate(string s) {
		// use stack as container
		stack values;
		stack operators;
		int curVal = 0; // current value

		// loop the expression s
		for (char ch: s)
		{
			switch(ch)
			{
				// normal digits
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				curVal *= 10;
				curVal += ch - '0';
				break;
				// operators
			case '+':
			case '-':

				// brackets
			case '(':
			case ')':

				// spaces
			case ' ':

				// others
			default:
			}
		}
    }
};
