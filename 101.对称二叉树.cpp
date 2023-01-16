/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode *root)
    {
        function<bool(TreeNode *, TreeNode *)> f = [&](TreeNode *pp, TreeNode *qq)
        {
            if (!pp && !qq) return true;
            if (pp == nullptr ^ qq == nullptr) return false;
            if (pp->val != qq->val) return false;
            return f(pp->left, qq->right) && f(pp->right, qq->left);
        };

        if ((!root->left) && (!root->right)) return true;

        if ((!root->left) || (!root->right)) return false;
        return f(root->left, root->right);
    }
};
// @lc code=end
