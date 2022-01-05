//
// Created by bakashigure on 12/29/2021.
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
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        int ret = 0;
        unordered_map<int,int> f;
        for(int c = n-2;c>=2;c--) {
            f[nums[c + 1]]++;
            for (int a = 0; a < c; a++)
            {
                for(int b = a+1;b<c;b++)
                {
                    int tmp = nums[a]+nums[b]+nums[c];
                    ret += f[tmp];
                }
            }
        }
        return ret;
    }
};

#endif

