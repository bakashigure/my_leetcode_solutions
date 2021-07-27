#if 0
#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) :val(x), left(left), right(right) {}
};

class Solution {
public:
	int ans = -1;
	int findSecondMinimumValue(TreeNode* root) {
		int rootval = root->val;
		dfs(root, root->val);
		return ans;

	}
	void dfs(TreeNode* node, int cur)
	{
		cout << 'dfs' << endl;
		if (!node) return;
		if (node->val != cur)
		{
			if (ans == -1) ans = node->val;
			else ans = min(ans, node->val);
			return;
		}
		dfs(node->left, cur);
		dfs(node->right, cur);

	}
};


#endif