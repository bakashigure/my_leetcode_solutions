//
// Created by bakashigure on 3/15/2022.
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
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int ret = 0;
        int max = 0;
        function<void(int,int)> dfs = [&](int pos,int val){
            if(pos == n)
            {
                if(val>max)
                {
                    max = val;
                    ret = 1;
                }
                else if(val == max)
                {
                    ++ret;
                }
            }
            else{
                dfs(pos+1,val);
                dfs(pos+1,val|nums[pos]);
            }
        };
        dfs(0,0);
        return ret;
    }
};

#endif

