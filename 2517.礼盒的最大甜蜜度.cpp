/*
 * @lc app=leetcode.cn id=2517 lang=cpp
 *
 * [2517] 礼盒的最大甜蜜度
 */

#include <vector>
#include <functional>
#include <algorithm>

// @lc code=start
class Solution {
public:
    int maximumTastiness(std::vector<int>& price, int k) {
        std::sort(price.begin(), price.end());
        int n = price.size();
        auto check = [&](int tasty){
            int cnt = 1;
            int prev = price.front();
            for(int i = 1;i < n; i++) {
                if (price[i] - prev >= tasty) {
                    prev = price[i];
                    if (++cnt == k) return true;
                }
            }
            return false;
        };

        int l = 0;
        int r = price.back() - price.front();
        while(l<r) {
            int mid = (l+r+1) >> 1;
            if (check(mid)) {
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        return l;
    }
};
// @lc code=end

