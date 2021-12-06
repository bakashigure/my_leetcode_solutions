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
    vector<string> findRelativeRanks(vector<int>& score) {
        auto cmp = [](pii &a,pii &b) {return a.second<b.second;};
        priority_queue<pii,vector<pii>, decltype(cmp)> pq(cmp);
        for(int i=0;i<score.size();++i) pq.emplace(pii{i,score[i]});
        vector<string> ans;
        ans.resize(score.size());
        int i = 1;
        string tops[4] = {"","Gold Medal","Silver Medal","Bronze Medal"};
        while(!pq.empty())
        {
            if (i<4) ans[pq.top().first] = tops[i];
            else ans[pq.top().first] = to_string(i);
            i++;
            pq.pop();
        }
        return ans;
    }
};

#endif


