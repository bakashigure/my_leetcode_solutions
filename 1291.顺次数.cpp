/*
 * @lc app=leetcode.cn id=1291 lang=cpp
 *
 * [1291] 顺次数
 */
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        vector<int> ret{};
        for (int i = 1; i <= 9; i++)
        {
            int num = i;
            for (int j = i + 1; j <= 9; j++)
            {
                num = num * 10 + j;
                if (num >= low && num <= high)
                    ret.emplace_back(num);
            }
        }
        sort(ret.begin(), ret.end());
        return ret;
    }
};
// @lc code=end