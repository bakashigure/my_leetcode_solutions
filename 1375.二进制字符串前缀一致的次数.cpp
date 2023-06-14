/*
 * @lc app=leetcode.cn id=1375 lang=cpp
 *
 * [1375] 二进制字符串前缀一致的次数
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int numTimesAllBlue(std::vector<int>& flips) {
        // 草 正确解法应该是求子串最大值是不是i+1
        int ret = 0;
        int n = flips.size();
        bool map[50010] = {false};
        int l = 0;
        int total = 0;
        for(int i = 0; i < n; i++) {
            int flip = flips[i]-1;
            map[flip] = !map[flip];

            if(map[flip]) {
                if(flip <= i) {
                    l++;
                    total++;
                } else {
                    total++;
                }
            } else {
                if(flip <= i) {
                    l--;
                    total--;
                } else {
                    total--;
                }
            }

            if(flip!=i) {
                if(map[i]) {
                    l++;
                }
            }

            //std::cout<<i<<" "<< l<<"  "<<total<<"\n";

            if(l-1==i&&l==total) {
                ret++;
            }
        }
        return ret;
        
    }
};
// @lc code=end

