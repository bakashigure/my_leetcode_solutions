/*
 * @lc app=leetcode.cn id=834 lang=cpp
 *
 * [834] 树中距离之和
 */
#include <bits/stdc++.h>

// @lc code=start
/*
    从x换到y, 到y的每个节点数字都减一, 包括y自身； 到x的每个节点数字都加一
                ↑  size[y]                           ↑ size[x] = n-size[y]
    ans[y] = ans[x] + n - size[y] - size[y]
           = ans[x] + n - 2*size[y]
*/
class Solution {
public:
    std::vector<int> sumOfDistancesInTree(int n, std::vector<std::vector<int>>& edges) {
        std::vector<std::vector<int>> g(n); // 边
        std::vector<int> answer(n, 0); // 结果
        std::vector<int> size(n, 1); // 子树数量, 提前加了自身

        // 填充边
        for(auto &vec:edges) {
            g[vec[0]].push_back(vec[1]);
            g[vec[1]].push_back(vec[0]);
        }

        std::function<void(int, int, int)> dfs = [&](int x, int fa, int depth) -> void {
            answer[0] += depth; // depth为0到x的长度
            for(auto y:g[x]) {
                if (y != fa) {
                    dfs(y, x, depth+1);
                    size[x] += size[y]; // y为x子树, 给x加子树y的大小
                }
            }
        };
        // 以0为根, 第一次dfs计算出ans[0]和所有节点的值
        dfs(0, -1, 0);

        // 换根
        std::function<void(int, int)> reroot = [&](int x, int fa) -> void {
            for (auto y:g[x])
            {
                if (y != fa) {
                    answer[y] = answer[x] + n - 2*size[y];
                    reroot(y, x);
                }
            }
        };

        reroot(0, -1);
        return answer;
    }
};
// @lc code=end

