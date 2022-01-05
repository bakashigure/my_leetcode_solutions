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
    string minNumber(vector<int>& nums) {
        string l;
        string r;
        sort(nums.begin(),nums.end(),[&](int& lhs, int& rhs){
            l = to_string(lhs) + to_string(rhs);
            r = to_string(rhs) + to_string(lhs);
            return l<r;
        });
        stringstream ss;
        for(auto v:nums)
            ss<<v;
        return ss.str();
    }
};

/*
class Solution {
public:
    string minNumber(vector<int>& nums) {

        string lhs;
        string rhs;
        for(int i=0;i<nums.size()-1;i++)
            for(int j=0;j<nums.size()-1;j++)
            {
                lhs = to_string(nums[j]) + to_string(nums[j+1]);
                rhs = to_string(nums[j+1])+to_string(nums[j]);
                if(lhs>rhs)
                    swap(nums[j],nums[j+1]);
            }
        stringstream ss;
        for(auto num : nums)
            ss<<num;
        return ss.str();
    }
};

 */

#endif

