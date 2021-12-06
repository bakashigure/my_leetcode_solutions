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
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int max_size = 1;
        for(int i=1;i<s.length();++i)
        {
            int tmp = 1;
            while (i<s.length() && s[i]==s[i-1])
            {
                tmp++;
                i++;
            }
            max_size = max(tmp,max_size);
        }
        return max_size;
    }
};

#endif
