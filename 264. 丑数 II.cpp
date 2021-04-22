#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int nthUglyNumber(int n)
    {
        if (n==1) return 1;
        vector<int> dp(n);
        dp[0]=1;
        int dp_2,dp_3,dp_5;
        dp_2=dp_3=dp_5=0;
        for(int i=1; i<n; ++i)
        {
            dp[i]=min(min(2*dp[dp_2],3*dp[dp_3]),5*dp[dp_5]);
            if (dp[i]==2*dp[dp_2])
                dp_2++;
            if (dp[i]==3*dp[dp_3])
                dp_3++;
            if (dp[i]==5*dp[dp_5])
                dp_5++;
        }
        return dp[n-1];
    }
};

int main()
{
    int n = 11;
    Solution s;
    int res = s.nthUglyNumber(n);
    printf("%d",res);
    return 0;

}

#endif // 1
