//
// Created by bakashigure on 11/23/2021.
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
    string reverseLeftWords(string s, int n) {
        auto rev = [&](int i,int j) {
            while(i<j) swap(s[i++],s[j--]);
        };
        rev(0,n-1);
        rev(n,s.size()-1);
        rev(0,s.size()-1);
        return s;
    }
};

#endif
