/*
 * @lc app=leetcode.cn id=2673 lang=cpp
 *
 * [2673] 使二叉树所有路径值相等的最小代价
 */

#include <bits/stdc++.h>

// @lc code=start
/* 自底向上, 想让到所有叶子节点的路径相等, 相邻叶子节点的值必须是相等的
所以把相邻叶子节点的较小值补成较大值, 这里abs(较大值-较小值)就得增加到最终结果里
对所有叶子节点都处理完后, 就可以把叶子节点的值加给父节点，此时看做父节点成为了新的叶子节点。
*/
class Solution {
public:
    int minIncrements(int n, std::vector<int>& cost) {
        int cnt = 0;
        for (int i = n-2; i>0;i-=2)
        {
            // 计算相邻叶子节点的差值
            cnt += abs(cost[i] - cost[i+1]);

            // 左孩子为i, 父节点为i/2
            cost[i/2] = cost[i/2] + std::max(cost[i], cost[i+1]);
        }
        return cnt;
    }
};
// @lc code=end

