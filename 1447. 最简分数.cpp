//
// Created by bakashigure on 2/10/2022.
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

using namespace std;

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ret;
        for(int a = 2;a<=n;++a)
            for(int b = 1;b<a;++b)
                if(__gcd(b,a)==1)
                    ret.emplace_back(to_string(b)+"/"+ to_string(a));
        return ret;
    }
};

#endif
