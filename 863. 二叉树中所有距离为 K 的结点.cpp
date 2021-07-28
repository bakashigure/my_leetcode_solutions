#if 0
#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	vector<int> ans;
	map<int, TreeNode*> parents;

	// 记录所有节点的父节点
	void findParent(TreeNode* node)
	{
		if (node->left)
		{
			parents[node->left->val] = node;
			findParent(node->left);
		}
		if (node->right)
		{
			parents[node->right->val] = node;
			findParent(node->right);
		}
	}

	void findAns(TreeNode* node, TreeNode* from, int depth, int k)
	{
		if (!node) return;
		if (depth == k) ans.push_back(node->val);

		if (node->left != from) {
			findAns(node->left, node, depth + 1, k);
		}
		if (node->right != from)
		{
			findAns(node->right, node, depth + 1, k);
		}
		if (parents[node->val] != from)
		{
			findAns(parents[node->val], node, depth + 1, k);
		}

	}

	vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
	{
		findParent(root);
		findAns(target, nullptr, 0, k);
		return ans;
	}
};


#endif