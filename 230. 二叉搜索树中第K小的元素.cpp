#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	int kthSmallest(TreeNode* root, int k) {
		stack<TreeNode*> s;
		while (root!=nullptr)
		{
			while (root&&root->left)
			{
				s.push(root);
				root = root->left;
			}
			root = s.top();
			s.pop();
			k--;
			if (k == 0) break;
			root = root->right;

		}
		return root->val;

	}
};


int main()
{

}


#endif