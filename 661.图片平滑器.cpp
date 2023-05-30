/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */
#include <iostream>
#include <vector>

// @lc code=start
class Solution {
public:
    std::vector<std::vector<int>> imageSmoother(std::vector<std::vector<int>>& img) {
        auto ret = img;
        int m = img.size();
        int n = img[0].size();
        int dirs[8][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}, {1,1}, {1,-1}, {-1,1}, {-1,-1}};
        auto ave = [&](int x, int y){
            int sum = img[x][y];
            int v = 1;
            // int v = 9;
            // if( (x==0 && y==0) || (x==m-1 && y==n-1) || (x==m-1 && y == 0) || (x==0 && y==n-1)) {
            //     v = 4;
            // } else if(x == 0 || y == 0 || x == m-1 || y == n-1) {
            //     v = 6;
            // }
            for(auto& dir:dirs) {
                int nx = x + dir[0];
                int ny = y + dir[1];
                if(nx >= 0 && nx <= m-1 && ny >=0 && ny <= n-1) {
                    v+=1;
                    sum += img[nx][ny];
                }
            }
            return sum/v;
        };
        for (int i = 0; i<m; i++) {
            for (int j = 0; j<n; j++) {
                ret[i][j] = ave(i,j);
            }
        }
    return ret;
    }
};
// @lc code=end

