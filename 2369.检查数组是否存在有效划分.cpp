/*
 * @lc app=leetcode.cn id=2369 lang=cpp
 *
 * [2369] 检查数组是否存在有效划分
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution
{
public:
    bool validPartition(std::vector<int> &nums)
    {
        int n = nums.size();
        std::vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            if (i >= 2)
            {
                dp[i] = dp[i - 2] && (nums[i - 1] == nums[i - 2]);
            }
            if (i >= 3)
            {
                dp[i] = dp[i] || (dp[i-3] && ((nums[i - 1] == nums[i - 2] && nums[i - 2] == nums[i - 3]) || (nums[i - 3] + 1 == nums[i - 2] && nums[i - 2] + 1 == nums[i - 1])));
            }
        }

        return dp[n];
    }
};
// @lc code=end
