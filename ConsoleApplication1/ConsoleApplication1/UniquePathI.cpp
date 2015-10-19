#include "stdafx.h"


class Solution {
public:
	int uniquePaths(int m, int n ) {
		int total = m + n, up = m < n ? m-1 : n-1;
		int results = 1;
		for (int i = 0; i != up; i++) {
			results *= ((total - i) / (i+1));
		}
		return results;
	}

};


