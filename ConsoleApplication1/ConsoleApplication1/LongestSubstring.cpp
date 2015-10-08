#include "stdafx.h"

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.empty())
			return 0;


		string::iterator begin = s.begin(), end = s.begin() + 1, found;
		int length = 1;
		while (end != s.end() + 1)
		{
			found = find(begin, end, *end);
			//if the char is found in current substring 
			if (found != end || end == s.end())
			{
				if (end - begin > length)
					length = end - begin;
				begin = found + 1;
			}
			end++;
		}
		return length;

	}
};


