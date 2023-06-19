/*
 * @lc app=leetcode.cn id=1262 lang=cpp
 *
 * [1262] 可被三整除的最大和
 */

#include <bits/stdc++.h>

// @lc code=start
class Solution {
    #define INF -0xfffffff
public:
    int maxSumDivThree(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<std::vector<int>> dp(n+1, std::vector<int>(3,0));
        // f(0,0) = 0
        // f(0,1) = -INF ; f(0,2) = -INF
        // f(i, j) = max(f(i-1, j) , f(i-1)(nums[i] mod 3) + nums[i])
        dp[0][0] = 0;
        dp[0][1] = INF;
        dp[0][2] = INF;
        for(int i = 1; i <= n; ++i) {
            for (int j = 0; j < 3; ++j) {
                dp[i][j] = std::max(dp[i-1][j], dp[i-1][((j-nums[i-1])%3+3)%3] + nums[i-1]);
            }
        }
        return dp[n][0];
    }
};
// @lc code=end

