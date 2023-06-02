/*
 * @lc app=leetcode.cn id=2154 lang=cpp
 *
 * [2154] 将找到的值乘以 2
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int findFinalValue(std::vector<int>& nums, int original) {
        std::unordered_set<int> rec(nums.begin(), nums.end());
        while(1) {
            if(rec.count(original)) original *=2 ;
            else return original;
        }
    }
};
// @lc code=end

