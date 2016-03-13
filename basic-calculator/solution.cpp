#include "../common.h"

class Solution {
public:
    int calculate(string s) {
		// use stack as container
		const int INVALID_RESULT = 0;
		stack<int> values;
		stack<char> operators;
		int curVal = 0; // current value
		bool bProcessingValue = false;

		// loop the expression s
		for (char ch: s)
		{
			// value
			if ('0' <= ch && '9' >= ch)
			{
				bProcessingValue = true;
				curVal *=10;
				curVal += ch - '0';
				continue;
			}
			if (bProcessingValue)
			{
				bProcessingValue = false;

				if (!operators.empty())
				{
					if ('+' == operators.top())
					{
						operators.pop();
						curVal += values.top();
						values.pop();
					}
					else if ('-' == operators.top())
					{
						operators.pop();
						curVal = values.top() - curVal;
						values.pop();
					}
				}
				values.push(curVal);
				curVal = 0;
			}

			if ('+' == ch || '-' == ch || '(' == ch)
				operators.push(ch);
			else if (')' == ch)
			{
				// find matched left bracket
				if  (!operators.empty() && operators.top() != '(')
				{
					if (values.size() < 2)
						return INVALID_RESULT;
					int first = values.top();
					values.pop();
					int second = values.top();
					values.pop();
					char oper = operators.top();
					operators.pop();
					switch(oper)
					{
					case '+':
						break;
					case '-':
						first = -first;
						break;
					default:
						return INVALID_RESULT;
					}
					values.push(first + second);
				}
				if (operators.empty())
					return INVALID_RESULT;
				else
				{
					operators.pop(); // find left bracket
					if  (!operators.empty() && operators.top() != '(')
					{
						if (values.size() < 2)
							return INVALID_RESULT;
						int first = values.top();
						values.pop();
						int second = values.top();
						values.pop();
						char oper = operators.top();
						operators.pop();
						switch(oper)
						{
						case '+':
							break;
						case '-':
							first = -first;
							break;
						default:
							return INVALID_RESULT;
						}
						values.push(first + second);
					}
				}
			}
			else if (' ' == ch)
			{
				// do nothing
			}
			else
			{
				// invalid character
				return INVALID_RESULT;
			}
		}
		if (bProcessingValue)
			values.push(curVal);

		// loop completed, process the stacks
		if (operators.size() != values.size() - 1)
			return INVALID_RESULT;

		int result = 0;
		while (!operators.empty())
		{
			int v = values.top();
			values.pop();
			char oper = operators.top();
			operators.pop();
			switch (oper)
			{
			case '+':
				break;
			case '-':
				v = -v;
				break;
			default:
				return INVALID_RESULT;
			}
			result += v;
		}
		// last one
		result += values.top();
		return result;
    }
};
