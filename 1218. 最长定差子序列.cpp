#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> dp;
        int ans = 0;
        for (auto& v : arr)
        {
            dp[v] = dp[v - difference] + 1;
            ans = max(dp[v], ans);
        }
        return ans;
    }
};

#endif