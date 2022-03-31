//
// Created by bakashigure on 3/11/2022.
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
    int countHighestScoreNodes(vector<int>& parents) {
        int n = parents.size();
        long max_score = 0;
        int ret = 0;
        vector<vector<int>> children(n);
        for(int i=0;i<n;++i)
        {
            if(parents[i]!=-1)
                children[parents[i]].emplace_back(i);
        }

        function<int(int)> dfs = [&](int node){
            long score = 1;
            int size  = n-1;
            for(auto c:children[node])
            {
                int t = dfs(c);
                score *= t;
                size -=t;
            }
            if(node!=0)
                score *= size;
            if(score == max_score)
            {
                ret++;
            }
            else if(score>max_score)
            {
                ret = 1;
                max_score = score;
            }
            return n - size;
        };
        dfs(0);
        return ret;
    }
};

#endif
