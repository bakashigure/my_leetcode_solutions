//
// Created by bakashigure on 12/20/2021.
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
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> f;
        if(n==1 && trust.empty()) return 1;
        for(vector<int>& p:trust)
        {
            f[p[1]]++;
            f[p[0]]--;
        }
        for(int i=0;i<=n;i++ )
        {
            if(f[i]==n-1) return i;
        }
        return -1;
    }
};

#endif

