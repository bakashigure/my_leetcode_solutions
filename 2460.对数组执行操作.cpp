/*
 * @lc app=leetcode.cn id=2460 lang=cpp
 *
 * [2460] 对数组执行操作
 */

#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    std::vector<int> applyOperations(std::vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i ++)
        {
            if(nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int l = 0, r = 0;
        while(l < n) {
            if(nums[l] != 0) {
                l++;
                continue;
            }
            r = l;
            while(r < n && nums[r] == 0) {
                r++;
            }
            if(r == n) break;
            std::swap(nums[l], nums[r]);
        }

        return nums;
    }
};
// @lc code=end

