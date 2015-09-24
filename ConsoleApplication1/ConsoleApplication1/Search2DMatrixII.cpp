 #include "stdafx.h"
// 
// 
// using namespace std;
// 
// 
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		size_t row_size = matrix.begin()->size();
		size_t column_size = matrix.size();
		size_t number_size = column_size * row_size;
		size_t begin = 0, end = number_size;
		size_t row = 0, column = 0;
		while (begin != end)
		{
			row = (begin + end) / 2 / row_size;
			column = (begin + end) / 2 % row_size;

			if (matrix[row][column] > target)
				end = (begin + end) / 2;
			else if (matrix[row][column] < target)
				begin = (begin + end + 1) / 2;
			else
				return true;
		}
		return false;

	}
};
// 
// 
// 
// 
// 
// 
// 
// int main()
// {
// 	Solution s;
// 	vector<vector<int>> input = { { 1,   4,  7, 11, 15 },
// 	{ 2,   5,  8, 12, 19 },
// 	{ 3,   6,  9, 16, 22 },
// 	{ 10, 13, 14, 17, 24 },
// 	{ 18, 21, 23, 26, 30 }
// 	};
// 	input = { { 1 } };
// 	cout << s.searchMatrix(input, 20);
// }