//
// Created by bakashigure on 1/15/2022.
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
    // 搞点通项求求
    // an = 28+7(n-1)
    // sn = n(28 + 28 + 7(n-1)) /2
    int totalMoney(int n) {
        int ret = 0;
        int weeks = n/7;
        int days = n%7;
        if(n>6)
            ret = weeks*(56 + 7*weeks - 7)/2;
        if(days>0)
            ret+= (double(weeks+1 + weeks + days) / 2)*days;
        return ret;


    }
};

#endif

