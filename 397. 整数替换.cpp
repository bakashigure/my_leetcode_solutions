//
// Created by bakashigure on 11/19/2021.
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
    int integerReplacement(int m) {
        int ans = 0;
        long long n = m;
        if (n==3) return ans+2;
        while(n!=1)
        {
            if (n==3) return ans+2;
            if(n&1)
            {
                if(((n+1)>>1) & 1 ) n--;
                else n++ ;
            }
            else{
                n>>=1;
            }
            ans++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    int res = s.integerReplacement(10);
    return 0;
}

#endif
