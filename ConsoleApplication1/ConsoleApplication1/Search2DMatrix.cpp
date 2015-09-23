#include "stdafx.h"


using namespace std;


class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		bool flag = false;
		//³õÊ¼»¯µü´úÆ÷
		vector<vector<int>>::iterator iter1 = matrix.begin();
		vector<int>::iterator iterBegin,iterEnd;
		size_t effective = matrix.size()-1;

		do
		{

			if (*(iter1->end()-1) < target)
			{
				iter1++;
				continue;
			}
			if (*(iter1->begin()) > target)
				break;
			flag = binary_search(iter1->begin(), iter1->end(), target);
			iter1++;

		}
		while (iter1 != matrix.end()&&!flag);
		return flag;
	}
};







int main()
{
	Solution s;
	vector<vector<int>> input = { {1,   4,  7, 11, 15},
	{2,   5,  8, 12, 19 },
	{3,   6,  9, 16, 22},
	{10, 13, 14, 17, 24},
	{18, 21, 23, 26, 30 }
};
	cout << s.searchMatrix(input,20);
}