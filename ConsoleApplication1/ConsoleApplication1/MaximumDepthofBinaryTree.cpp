#include "stdafx.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (!root)
			return 0;
		size_t depth = 0, currentSize = 1, nextSize = 0;
		deque<TreeNode*> nodelist;
		TreeNode* tmp;
		nodelist.push_back(root);
		while (!nodelist.empty())
		{
			depth++;
			while (currentSize--)
			{
				tmp = nodelist.front();
				nodelist.pop_front();
				if (tmp->left)
				{
					nodelist.push_back(tmp->left);
				}
				if (tmp->right)
				{
					nodelist.push_back(tmp->right);
				}

			}
			currentSize = nodelist.size();
		}
		return depth;


	}
};