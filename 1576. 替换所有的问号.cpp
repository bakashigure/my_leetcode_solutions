//
// Created by bakashigure on 1/5/2022.
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
    string modifyString(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                for(char c = 'a';c!='d';c++)
                {
                    if(i>0 && s[i-1]==c) continue;
                    if(i<s.length() && s[i+1]==c)continue;
                    s[i] = c;
                    break;
                }
            }
        }
        return s;
    }
};

#endif

