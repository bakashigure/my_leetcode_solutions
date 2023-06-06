/*
 * @lc app=leetcode.cn id=2352 lang=cpp
 *
 * [2352] 相等行列对
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution
{
public:
    int equalPairs(std::vector<std::vector<int>> &grid)
    {
        int n = grid.size();
        int cnt = 0;
        std::vector<std::string> cols(n);
        for (int i = 0; i < n; i++)
        {
            std::string cache = "";
            for (int j = 0; j < n; j++)
            {
                cache += std::to_string(grid[j][i]) + ' ';
            }
            cols[i] = cache;
        }
        // for(auto s: cols) {
        //     std::cout<<s<<"\n";
        // }
        for (int i = 0; i < n; i++)
        {
            std::string cache = "";
            for (int c : grid[i])
                cache += std::to_string(c) + ' ';
            // std::cout<<" compare "<<cache<<"\n";
            for (int j = 0; j < n; j++)
            {
                if (cache == cols[j])
                    cnt++;
            }
        }
        return cnt;
    }
};
// @lc code=end
