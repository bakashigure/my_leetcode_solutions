/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

#include <iostream>
#include <vector>

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
    {
        int prev = -1;
        int cnt = 0;
        for (int cur = 0; cur < flowerbed.size(); cur++)
        {
            if (flowerbed[cur] == 1)
            {
                if (prev == -1)
                {
                    cnt += cur / 2;
                }
                else
                {
                    cnt += (cur - prev) / 2 - 1;
                }
                prev = cur;
            }
        }
        if (flowerbed[flowerbed.size() - 1] == 0)
        {
            if (prev == -1)
            {
                cnt += (flowerbed.size() + 1) / 2;
            }
            else
            {
                cnt += (flowerbed.size() - prev -1 ) / 2;
            }
        }
        return cnt >= n;
    }
};
// @lc code=end
