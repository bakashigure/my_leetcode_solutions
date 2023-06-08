/*
 * @lc app=leetcode.cn id=2611 lang=cpp
 *
 * [2611] 老鼠和奶酪
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int miceAndCheese(std::vector<int>& reward1, std::vector<int>& reward2, int k) {
        int n = reward1.size();
        std::vector<int> diff(n);
        int ret = 0;
        for(int i = 0; i < n; ++i) {
            ret += reward2[i];
            diff[i] = reward1[i] - reward2[i];
        }
        std::sort(diff.begin(), diff.end(), [](const int& a,const int& b) {return a>b;});
        for(int i = 0;i<k;++i) {
            ret+=diff[i];
        }
        return ret;        
    }
};
// @lc code=end

