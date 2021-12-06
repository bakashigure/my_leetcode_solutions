//
// Created by bakashigure on 12/6/2021.
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
ll qpow(ll p,ll q,int mod) {ll f=1;while(q){if(q&1)f=f*p%mod;p=p*p%mod;q>>=1;}return f;}
//int qpow(int p,int q,int mod){int f=1;while(q){if(q&1)f=f*p%mod;p=p*p%mod;q>>=1;}return f;}

using namespace std;

class Solution {
public:
    // 99^2345 = (99^234^10)*99^5
    //         = (99^23^10)*99^4) * 99^10*99^5
    int superPow(int a, vector<int>& b) {
        int ans = 1;
        int mod = 1337;
        for(const auto& e:b)
        {
            ans = qpow(a,e,mod)*qpow(ans,10,mod)%mod;
        }
        return ans;

    }
};

#endif
