/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        function<bool(TreeNode *, TreeNode *)> f = [&](TreeNode *pp, TreeNode *qq)
        {
            if ((!pp) && (!qq)) return true;
            if (pp == nullptr ^ qq == nullptr) return false;
            if (pp->val != qq->val) return false;
            return f(pp->left, qq->left) && f(pp->right, qq->right);
        };

        return f(p, q);
    }
};
// @lc code=end
