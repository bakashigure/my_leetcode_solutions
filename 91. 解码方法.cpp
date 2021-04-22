#if 0
#include <bits/stdc++.h>
using namespace std;


/*
// 基本dp
class Solution
{
public:
    int numDecodings(string s)
    {
        if (s[0]=='0')
            return 0;
        int n = s.length();
        s=" "+s;
        vector<int> dp(n+1,0);
        dp[0]=1;
        for(int i = 1; i<=n; i++)
        {
            int a=s[i]-'0';
            int b=(s[i-1]-'0')*10+(s[i]-'0');
            if(a>=1 && a<=9) dp[i]=dp[i-1];
            if(b>=10 && b<=26) dp[i]+=dp[i-2];
        }


        return dp[n];
    }

};
*/
// 滚动数组
class Solution
{
public:
    int numDecodings(string s)
    {

        int n = s.length();
        s = " " + s;
        vector<int> dp(3, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            dp[i % 3] = 0;
            int a = s[i] - '0';
            int b = (s[i-1] - '0') * 10 + (s[i] - '0');
            if (a >= 1 && a <= 9) dp[i % 3] = dp[(i - 1) % 3];
            if (b >= 10 && b <= 26) dp[i % 3] += dp[(i - 2) % 3];
        }
        return dp[n % 3];
    }
};

int main()
{
    string s = "11106";
    Solution ss;
    int res=ss.numDecodings(s);
    printf("%d",res);
    return 0;
}

#endif // 1
