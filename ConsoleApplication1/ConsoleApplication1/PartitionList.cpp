#include "stdafx.h"


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* partition(ListNode* head, int x) {
		ListNode* less=new ListNode(0), *greater=new ListNode(0);
		ListNode* iter1 = less, *iter2 = greater,*tmp=nullptr;
		int value = 0;
		while (head)
		{
			value = head->val;
			head=head->next;
			tmp = new ListNode(value);
			if (value < x)
			{
				iter1->next = tmp;
				iter1 = tmp;
			}
			else {
				iter2->next = tmp;
				iter2 = tmp;
			}
			iter1->next = greater->next;

		}
		return less->next;

	}
};