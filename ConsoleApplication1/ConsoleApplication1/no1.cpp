// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> tmp(nums);
		sort(nums.begin(), nums.end());
		bool found = false;
		int i = 0, j = nums.size()-1;
		do 
		{
			if (nums[i] + nums[j] > target)
				j--;
			else if (nums[i] + nums[j] < target)
				i++;
			else
				found = true;

		} while (i!=j&&!found);
		if (found)
		{
			vector<int>::iterator iter1 = find(tmp.begin(), tmp.end(), nums[i]);
			vector<int>::reverse_iterator iter2 = find(tmp.rbegin(), tmp.rend(), nums[j]);
			vector<int> answer = { iter1 - tmp.begin()+1,3 - (iter2 -tmp.rbegin())};
			sort(answer.begin(), answer.end());
			return answer;
		}
	}
};



