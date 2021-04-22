#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();

        vector<vector<int>>  dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];

    }
};

int main()
{
    string text1 = "abcde";
    string text2 = "ace";
    Solution s;
    int res = s.longestCommonSubsequence(text1, text2);
    printf("%d", res);
    return 0;
}

#endif // 1
