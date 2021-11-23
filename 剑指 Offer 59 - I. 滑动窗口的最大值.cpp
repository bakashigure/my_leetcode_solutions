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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = (int)nums.size();
        if(n==0||k==0) return {};
        vector<int> ans;
        //ans.resize(n-k+1);
        priority_queue<pii> q;
        for(int i=0;i<k;++i)
        {
            q.emplace(pii{nums[i],i});
        }
        ans.emplace_back(q.top().first);
        for(int i=k;i<n;++i)
        {
            q.emplace(pii{nums[i],i});
            while(q.top().second<i-k+1) q.pop();
            ans.emplace_back(q.top().first);
        }
        return ans;

    }
};

#endif
