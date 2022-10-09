/*
 * @lc app=leetcode.cn id=1742 lang=cpp
 *
 * [1742] 盒子中小球的最大数量
 */
#include <iostream>

// @lc code=start
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int ret = 0;
        int arr[46] = {0};
        for(int i = lowLimit; i <= highLimit; ++i)
        {
            int sum = 0;
            int tmp = i;
            while(tmp > 0) {
                int remain = tmp % 10;
                sum += remain;
                tmp /= 10;
            }
            arr[sum]++;
            ret = std::max(arr[sum], ret);
        }
        return ret;
    }
};
// @lc code=end
