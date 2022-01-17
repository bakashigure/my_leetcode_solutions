//
// Created by bakashigure on 1/17/2022.
//
#if 0

#include <bits/stdc++.h>
#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&-x)
#define v2(m,n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IOS ios::sync_with_stdio(false);
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

/* a1 e2 i3 o4 u5
 * a前面可以 e i u
 * e : a i
 * i : e o
 * o : i
 * u : i o
 *
 * */

using namespace std;
class Solution {
public:
    int countVowelPermutation(int n) {
        // a e i o u
        int mod = 1e9+7;
        vector<ll> dp(5,1);
        vector<ll> ndp(5);
        for(int i=2;i<=n;++i)
        {
            ndp[0] = (dp[1] + dp[2] + dp[4])%mod;
            ndp[1] = (dp[0] + dp[2]) %mod;
            ndp[2] = (dp[1] + dp[3])%mod;
            ndp[3] = (dp[2])%mod;
            ndp[4] = (dp[2]+dp[3])%mod;
            dp = ndp;
        }
        return accumulate(dp.begin(),dp.end(),0LL)%mod;

    }
};

#endif


