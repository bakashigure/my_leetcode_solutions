/*
 * @lc app=leetcode.cn id=1240 lang=cpp
 *
 * [1240] 铺瓷砖
 */

#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int tilingRectangle(int n, int m) {
        int ret = std::max(n,m);
        std::vector<std::vector<bool>> stats(n, std::vector<bool>(m, false));
        auto isAvailable = [&](int x,int y, int k){
            for(int i = x; i<x+k; ++i) {
                for (int j = y; j<y+k; ++j) {
                    if(stats[i][j] == true) return false;
                }
            }
            return true;
        };

        auto fill = [&](int x,int y,int k) {
            for(int i = x; i<x+k; ++i) {
                for (int j = y; j<y+k; ++j) {
                    stats[i][j] = true;
                }
            }
        };

        auto unfill = [&](int x,int y,int k) {
            for(int i = x; i<x+k; ++i) {
                for (int j = y; j<y+k; ++j) {
                    stats[i][j] = false;
                }
            }
        };

        std::function<void(int,int,int)> dfs = [&](int x,int y,int cnt) {
            if (cnt >= ret) {return;}
            if (x >= n) {ret = cnt; return;};
            if (y >= m) {dfs(x + 1,0,cnt); return;}; // next line

            if(stats[x][y]) { dfs(x,y+1,cnt);return;} // if filled, go next place

            for(int k = std::min(n-x, m-y); k >=1 && isAvailable(x,y,k); --k ) {
                fill(x,y,k);
                dfs(x,y,cnt+1);
                unfill(x,y,k);
            }
        };

        dfs(0,0,0);
        return ret;
    }
};
// @lc code=end

