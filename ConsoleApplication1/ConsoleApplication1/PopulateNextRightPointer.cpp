#include "stdafx.h"


 struct TreeLinkNode {
 int val;
 TreeLinkNode *left, *right, *next;
 TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
	void connect(TreeLinkNode *root) {
		if (!root)
			return;
		TreeLinkNode *first= root,*iter=root;
		root->next = NULL;
		while (iter->left)
		{
			iter->left->next = iter->right;
			if (iter->next)
			{
				iter->right->next = iter->next->left;
				iter = iter->next;
			}
			else
			{
				iter->right->next = NULL;
				iter = first->left;
			}

		}
	}
};