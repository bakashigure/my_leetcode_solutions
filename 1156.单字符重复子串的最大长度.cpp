/*
 * @lc app=leetcode.cn id=1156 lang=cpp
 *
 * [1156] 单字符重复子串的最大长度
 */

#include <bits/stdc++.h>

// @lc code=start
class Solution {
public:
    int maxRepOpt1(std::string text) {
        int ret = 0;
        int cnt[26] = { 0 };
        for(const char& t : text) {
            ++cnt[t - 'a'];
        }

        for(int i = 0 ; i < text.size();) {
            int j = i;
            int cur_cnt = 0;
            while(j < text.size() && text[j] == text[i]) {
                j++;
            }
            cur_cnt = j - i;

            int k = j + 1;
            while(k < text.size() && text[k] == text[i]) {
                k++;
            }
            cur_cnt += k - j;

            ret = std::max(ret, std::min(cnt[text[i] - 'a'], cur_cnt));
            i = j;
        }
        
        return ret;

    }
};
// @lc code=end

