//
// Created by bakashigure on 12/16/2021.
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
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        int ret=0;
        int ans=0;
        double range = (double)angle / 180.0 * M_PI;
        vector<double> deg;
        for(auto& p:points)
        {
            if (p==location) ret++;
            else deg.emplace_back(atan2(p[1]-location[1],p[0]-location[0]));
        }
        sort(deg.begin(),deg.end());

        int m = deg.size();
        for(int i=0;i<m;++i)
            deg.emplace_back(deg[i]+2*M_PI);

        int right = 0;
        for(int i = 0;i<deg.size();++i)
        {    while ( right < deg.size() && deg[right]<=deg[i]+range) right++;
            ans = max(ans, right - i);
        }
        return ret+ans;
    }
};


#endif

