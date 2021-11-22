//
// Created by bakashigure on 11/17/2021.
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
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

using namespace std;

class Solution {
public:
    int maxProduct(vector<string>& words) {
        unordered_map<int,int> f;
        for(auto& word:words)
        {
            int tmp = 0;
            for(auto& c:word) tmp |= (1<<(c-'a'));
            f[tmp] = max(f[tmp],(int)word.length());
        }
        int ans=0;
        for(auto& v1:f) for(auto& v2:f) if(!(v1.first&v2.first)) ans = max(ans,v1.second*v2.second);
        return ans;
    }
};

#endif
