/*
 * @lc app=leetcode.cn id=2475 lang=cpp
 *
 * [2475] 数组中不等三元组的数目
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int unequalTriplets(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int ret = 0;
        int n = nums.size();
        for(int i = 0, j = 1; i < n; i = j)
        {
            while(j < n &&  nums[i] == nums[j] ) {
                j++;
            }
            ret += i*(j-i)*(n-j);
        }

        return ret;
    }
};
// @lc code=end

