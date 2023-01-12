/*
 * @lc app=leetcode.cn id=99 lang=cpp
 *
 * [99] 恢复二叉搜索树
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
/**
 * Definition for a binary tree node.

 */
class Solution
{
public:
    void recoverTree(TreeNode *root)
    {
        TreeNode *x = nullptr;
        TreeNode *y = nullptr;
        TreeNode *prev = new TreeNode(INT_MIN);

        function<void(TreeNode *)> f = [&](TreeNode *node)
        {
            if (!node) return;
            f(node->left);
            if (node->val < prev->val)
            {
                x = node;
                if (!y) y = prev;
            }
            prev = node;
            f(node->right);
        };

        f(root);
        swap(x->val, y->val);
    }
};
// @lc code=end
