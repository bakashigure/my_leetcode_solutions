/*
 * @lc app=leetcode.cn id=2581 lang=cpp
 *
 * [2581] 统计可能的树根数目
 */

#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int rootCount(std::vector<std::vector<int>>& edges, std::vector<std::vector<int>>& guesses, int k) {
        int n = edges.size();
        std::vector<std::vector<int>> g(n+1); // 边图
        std::unordered_map<long long, int> m; // 压缩猜测
        int ans = 0;
        int cnt0 = 0; // 以0为根时的猜测正确数

        // 边图
        for (auto &e: edges) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }

        for (auto &guess: guesses) {
            m[(long long)guess[0] << 32 | guess[1]] = 1;
        }

        std::function<void(int, int)> dfs = [&](int x, int fa) -> void {
            for (auto y: g[x]) {
                if (y != fa) {
                    if (m[(long long)x << 32 | y]) cnt0++;
                    dfs(y, x);
                }
            }
        };

        dfs(0, -1); 

        std::function<void(int, int, int)> reroot = [&](int x, int fa, int cnt) -> void {
            if (cnt >= k) // 以x为根, 猜测结果正确数大于等于k
                ans++; 
            for (auto y:g[x]) {
                if (y != fa) {
                    int cnt_tmp = cnt; // 每次递归都应基于目前的cnt计算新的cnt, 不能修改原有的
                    if (m[(long long)x << 32 | y]) cnt_tmp--;
                    if (m[(long long)y << 32 | x]) cnt_tmp++;
                    reroot(y, x, cnt_tmp);
                }
            }
        };

        reroot(0, -1, cnt0);

        return ans;
    }
};
// @lc code=end

