/*
 * @lc app=leetcode.cn id=2465 lang=cpp
 *
 * [2465] 不同的平均值数目
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int distinctAverages(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::set<int> cnt;
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            cnt.emplace(nums[l]+nums[r]);
            l++; 
            r--;
        }
        return cnt.size();
    }
};
// @lc code=end

