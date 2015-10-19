#include "stdafx.h"


class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int sum = 0, iter1 = 0, iter2 = 0;
		int size = 0, min = nums.size();

		while (iter2 != nums.size() + 1)
		{

			if (sum < s)
			{
				if (iter2 == nums.size())
					if (iter1)
						;
					else
						return 0;
				sum += nums.at(iter2++);
				size++;
			}
			else
			{
				sum -= nums.at(iter1++);
				size--;
				if (size < min)
				{
					if (sum >= s)
						min = size;
					else
						min = size + 1;
				}
			}

		}
		return min;



	}
};

