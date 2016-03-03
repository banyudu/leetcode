#include "../common.h"

class Solution {
public:
    bool isMatch(string s, string p) {
		const static char ESCAPE_CHRACTER = '\\';
		const static char ANY_COUNT = '*';
		const static char ANY_VALUE = '.';
		const static char INVALID_SUBJECT = '\0';

		// check if pattern is emtpy
		if (p.empty())
			return s.empty();

		// invalid character '\0' stands for empty subject
		char subject = s.empty()? INVALID_SUBJECT: s[0];

		int pLen = p.length();
		bool bHasEscape = false;
		bool bMatched = false;
		int regexHeadLength;
		bool bAnyValueEnabled = true;
		char match = '\0';
		for (regexHeadLength = 1; regexHeadLength <= pLen; regexHeadLength++)
		{
			bAnyValueEnabled = true;
			match = p[regexHeadLength - 1];
			if (match == ESCAPE_CHRACTER)
			{
				bHasEscape = !bHasEscape;
				if (bHasEscape)
					continue;
			}

			if (bHasEscape)
			{
				// last character is escape and current character is not, current character can only be dot or star
				switch (match)
				{
				case ANY_VALUE:
					bAnyValueEnabled = false;
					break;
				case ANY_COUNT:
					// do nothing
					break;
				default:
					return false; // syntax error
				}
			}
			else if (ANY_COUNT == match) // syntax error
				return false;

			// matched, break the loop
			if (subject != INVALID_SUBJECT && (match == subject || (bAnyValueEnabled && ANY_VALUE == match)))
			{
				bMatched = true;
				break;
			}

			// unmatch, detect whether next character is star
			if (regexHeadLength >= pLen || ANY_COUNT != p[regexHeadLength++])
				return false;
		}

		if (!bMatched)
			return s.empty();

		// matched, detect whether next character is star
		if (regexHeadLength < pLen && ANY_COUNT == p[regexHeadLength])
		{
			string subPattern = p.substr(regexHeadLength + 1, string::npos);
			if (isMatch(s, subPattern))
				return true;
			int sLen = s.length();
			// greed or not
			int i;
			for (i = 1; i <= sLen; i++)
			{
				bool bGreedMatch = (match == s[i - 1] || (bAnyValueEnabled && ANY_VALUE == match));
				if (!bGreedMatch)
					break;
				if (isMatch(s.substr(i, string::npos), subPattern))
					return true;
			}
			if (i == sLen + 1 && isMatch("", subPattern))
				return true;
		}
		string subSubject = s.empty()? s: s.substr(1, string::npos);
		return isMatch(subSubject, p.substr(regexHeadLength, string::npos));
    }
};
