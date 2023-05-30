/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
#include <iostream>
#include <vector>
#include <algorithm>

// @lc code=start
class Solution
{
public:
    void moveZeroes(std::vector<int> &nums)
    {
        int j = 0;
        if (nums.size() == 1) return;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                if(i>j) {
                    std::swap(nums[i], nums[j]);
                }
                j+=1;
            }
        }
    }
};
// @lc code=end
