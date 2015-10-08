#include "stdafx.h"

class Solution {
public:
	string convert(string s, int numRows) {
		string answer;
		int iter = 0;
		if (numRows == 1)
			return s;

		for (int row = 0; row != numRows;row++)
		{
			iter = row;
			while (iter<s.size())
			{
				answer += s.at(iter);
				if (iter + 2 * (numRows - 1 - row) < s.size()&&row!=numRows-1&&row!=0)
					answer += s.at(iter + 2 * (numRows - 1 - row));
				iter += 2 * (numRows - 1);
			}
		}
		return answer;
	}
};



