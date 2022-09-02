/*
 * @lc app=leetcode.cn id=687 lang=cpp
 *
 * [687] 最长同值路径
 */
#if 0
#include <functional>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// @lc code=start

class Solution
{
public:
    int longestUnivaluePath(TreeNode *root)
    {
        int ret = 0;
        std::function<int(TreeNode *)> dfs = [&](TreeNode *node)
        {
            if (!node)
                return 0;
            int left = dfs(node->left);
            int right = dfs(node->right);
            int left1 = 0, right1 = 0;
            if (node->left && node->left->val == node->val)
            {
                left1 = left + 1;
            }
            if (node->right && node->right->val == node->val)
            {
                right1 = right + 1;
            }
            ret = std::max(ret, left1 + right1);
            return std::max(left1, right1);
        };
        dfs(root);
        return ret;
    }
};
// @lc code=end
#endif
