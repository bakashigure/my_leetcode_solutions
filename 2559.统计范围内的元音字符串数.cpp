/*
 * @lc app=leetcode.cn id=2559 lang=cpp
 *
 * [2559] 统计范围内的元音字符串数
 */
#include <iostream>
#include <vector>

// @lc code=start
class Solution {
public:
    std::vector<int> vowelStrings(std::vector<std::string>& words, std::vector<std::vector<int>>& queries) {
        int cnt[100005] = { 0 };
        std::vector<int> ret(queries.size());
        for (int i = 0; i < words.size(); ++i) {
            auto& front = words[i].front();
            auto& back = words[i].back();
            if ((front == 'a' || front == 'e' || front == 'i' || front == 'o' || front == 'u') && (back == 'a' || back == 'e' || back == 'i' || back == 'o' || back == 'u'))
            {
                cnt[i+1] = cnt[i] + 1;
            } else {
                cnt[i+1] = cnt[i];
            }
        }
        for (int i = 0; i < queries.size(); ++i) {
            ret[i] = cnt[queries[i][1]+1] - cnt[queries[i][0]];
        }
        return ret;
    }
};
// @lc code=end

