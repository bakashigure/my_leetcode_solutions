/*
 * @lc app=leetcode.cn id=1110 lang=cpp
 *
 * [1110] 删点成林
 */
#include <iostream>
#include <vector>
#include <unordered_set>
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
    std::vector<TreeNode *> delNodes(TreeNode *root, std::vector<int> &to_delete)
    {
        std::unordered_set<int> deleted(to_delete.begin(), to_delete.end());
        std::vector<TreeNode *> ret;

        std::function<TreeNode *(TreeNode *, bool)> dfs = [&](TreeNode *node, bool is_root) -> TreeNode *
        {
            if (!node)
                return nullptr;

            bool del = deleted.count(node->val) ? true : false;
            node->left = dfs(node->left, del);
            node->right = dfs(node->right, del);

            if (del)
            {
                return nullptr;
            }
            else
            {
                if (is_root)
                {
                    ret.emplace_back(node);
                }
            }
            return node;
        };

        dfs(root, true);
        return ret;
    }
};
// @lc code=end
