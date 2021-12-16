//
// Created by bakashigure on 12/15/2021.
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
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n = quiet.size();
        vector<int> ret(n);
        queue<int> q;
        vector<vector<int>> info(n);
        vector<int> indeg(n);
        for(auto&it : richer)
        {
            info[it[0]].emplace_back(it[1]);
            ++indeg[it[1]];
        }
        for(int i=0;i<n;i++)
        {
            ret[i]=i;
            if(indeg[i]==0) q.emplace(i);
        }
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            for(int y:info[front])
            {
                if(quiet[ret[front]] < quiet[ret[y]])
                    ret[y] = ret[front];
                if(--indeg[y]==0)
                    q.emplace(y);
            }
        }
        return  ret;

    }
};

#endif


