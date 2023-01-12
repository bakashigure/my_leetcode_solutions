/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 */

#include <bits/stdc++.h>
using namespace std;

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
    bool isValidBST(TreeNode *root)
    {
        function<bool(TreeNode*, long, long)> dfs = [&](TreeNode* node, long low, long high){
            if (!node) return true;
            if (low >= node->val || high <= node->val) return false;
            return dfs(node->left, low, node->val) && dfs(node->right, node->val, high);
        };

        return dfs(root, LONG_MIN, LONG_MAX);
    }
};
// @lc code=end
