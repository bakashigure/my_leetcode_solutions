/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
 */
#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
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
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        int index = 0;
        stack<TreeNode*> stk;
        stk.emplace(root);
        TreeNode* node=root;
        for (int i = 1; i < inorder.size(); ++i) {
            if (stk.empty() || inorder[index] != stk.top()->val) {
                node->left = new TreeNode(preorder[i]);
                node = node->left;
                stk.emplace(node);
            } else {
                while(!stk.empty() && inorder[index] == stk.top()->val )
                {
                    node = stk.top();
                    stk.pop();
                    ++index;
                }
                node->right = new TreeNode(preorder[i]);
                node = node->right;
                stk.emplace(node);
            }
        }
        return root;
    }
};
// @lc code=end
