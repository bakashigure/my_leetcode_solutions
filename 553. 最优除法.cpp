//
// Created by bakashigure on 2/27/2022.
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
    string optimalDivision(vector<int>& nums) {
        if(nums.size()==1) return to_string(nums[0]);
        else if(nums.size()==2) return to_string(nums[0])+"/"+ to_string(nums[1]);
        else{
            string ret = to_string(nums[0])+"/("+ to_string(nums[1]);
            for (int i = 2; i < nums.size(); i++) {
                ret+="/" + to_string(nums[i]);
            }
            ret+=')';
            return ret;
        }

    }
};
#endif
