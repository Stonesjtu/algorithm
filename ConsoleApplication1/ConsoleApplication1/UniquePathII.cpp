#include "stdafx.h"


class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		size_t row = obstacleGrid.size(), column = obstacleGrid.front().size();
		int **support;
		support = new int*[row];
		for (int i = 0; i != row; i++)
			support[i] = new int[column];
		//initial the support matrix
		bool flag = true;
		for (int i = 0; i != column; i++)
		{
			if (flag)
			{
				if (obstacleGrid.at(0).at(i))
				{
					flag = false;
					support[0][i] = 0;
				}
				else
					support[0][i] = 1;
			}
			else
				support[0][i] = 0;
		}
		flag = true;
		for (int i = 0; i != row; i++)
		{
			if (flag)
			{
				if (obstacleGrid.at(i).at(0))
				{
					flag = false;
					support[0][i] = 0;
				}
				else
					support[i][0] = 1;
			}
			else
				support[i][0] = 0;
		}
		for (int iter_row = 1; iter_row != row; iter_row++) {

			for (int iter_column = 1;
			iter_column != column; iter_column++) {
				if (obstacleGrid.at(iter_row).at(iter_column))
					support[iter_row][iter_column] = 0;
				else
					support[iter_row][iter_column] =
					support[iter_row - 1][iter_column] +
					support[iter_row][iter_column - 1];
			}
		}
		return support[--row][--column];
	}
};
