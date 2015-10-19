#include "stdafx.h"

class Solution {
public:
	bool wordBreak(string s, unordered_set<string>& wordDict) {
		if (s.size() == 0)
			return true;
		//using a stack to store the starting iter of words in diction.
		stack<int> start_iter;
		start_iter.push(0);
		while (!start_iter.empty())
		{
			for (int i = 1; i != s.size()-start_iter.top()+1; i++) {
				if (wordDict.find(s.substr(start_iter.top(), i)) != wordDict.end()) {
					start_iter.push(i+start_iter.top());
					i = 0;
				}
				if (start_iter.top() == s.size())
					return true;
			}
			start_iter.pop();
		}
		return false;
	}
};