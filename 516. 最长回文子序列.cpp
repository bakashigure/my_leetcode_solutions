#if 0
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n));
        for (int i = n-1; i >= 0; i--)
        {
            dp[i][i] = 1;
            char a = s[i];
            for (int j = i + 1; j < n; j++)
            {
                char b = s[j];
                if (a == b) dp[i][j] = dp[i + 1][j - 1] + 2;
                else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);


            }
        }
        return dp[0][n - 1];

    }
};


#endif