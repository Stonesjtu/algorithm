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
						break;
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


int main()
e{
	Solution s;
	vector<int> input = {
		5,1,3 ,5,10,7,4,9,2,8 };
	s.minSubArrayLen(15, input);
	//cout << s.addTwoNumbers(new ListNode(5), new ListNode(5));

	int* little = new int(0x544f4e45);
	unsigned char * test = (unsigned char *)little;

	cout << sizeof(little) << *(little) << endl << *test << "   " << *(test + 1) << endl;
	system("pause");

}