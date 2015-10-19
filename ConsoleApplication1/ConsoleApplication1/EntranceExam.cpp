#include "stdafx.h"


class Stone {
public:
	vector<int> arr,answer;
	void find_int(int target,int prev=0) {
// 		if (prev = 0)
// 			prev = arr.back();
		for (int i = prev; i != arr.size(); i++) {
			if (arr[i] > target)
				break;
			answer.push_back(arr[i]);
			if (arr[i] == target)
				get_answer();
			else {
				find_int(target - arr[i], i);
			}
			answer.pop_back();
		}

	}
	void get_answer() {
		for (int i = 0; i != answer.size(); i++)
			cout << " " << answer.at(i);
		cout << endl;
	}
};


// int main()
// {
// 	Stone s;
// 	s.arr = {2,3,4,5,6,9};
// 	s.find_int(50);
// // 	Solution s;
// // 	vector<vector<int>> input = { { 1,0,0,0,0,0 },{ 0,1,0,1,0,0 } };
// // 	s.uniquePathsWithObstacles(input);
// // 	//cout << s.addTwoNumbers(new ListNode(5), new ListNode(5));
// 
// 	int* little = new int(0x544f4e45);
// 	unsigned char * test = (unsigned char *)little;
// 
// 	cout << sizeof(little) << *(little) << endl << *test << "   " << *(test + 1) << endl;
// 	//system("pause");
// 
// }

