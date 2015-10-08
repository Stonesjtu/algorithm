


#include "stdafx.h"


// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int flag = 0;
		ListNode * answer = new ListNode(0);
		ListNode * iter = answer;
		int val1, val2;
		//l1 and l2 are both not null
		while (flag || (l1 || l2))
		{
			iter->next = new ListNode(0);
			iter = iter->next;
			if (l1)
			{
				val1 = l1->val;
				l1 = l1->next;
			}
			else
				val1 = 0;
			if (l2)
			{
				val2 = l2->val;
				l2 = l2->next;
			}
			else
				val2 = 0;

			int sum = val1 + val2 + flag;
			if (sum >= 10)
				flag = 1;
			else
				flag = 0;
			iter->val = sum % 10;
		}

		return answer->next;
	}
};



