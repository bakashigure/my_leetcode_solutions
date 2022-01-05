//
// Created by bakashigure on 12/20/2021.
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
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int m = houses.size();
        int n = heaters.size();
        int ret = 0;
        if(n==1){
            return max( abs(heaters[0] - *max_element(houses.begin(),houses.end())), abs(heaters[0]- *min_element(houses.begin(),houses.end())));
        }
        int l = 0, r = 1;
        int idx = 0;
        while(idx<m && r<n)
        {
            if(houses[idx] + ret <= heaters[l])
            {
                    ret = max(ret,heaters[l]-houses[idx]);
                    idx++;
            }
            else if(houses[idx] - ret >= heaters[r]){

                if(r==n-1){
                    ret = max(ret,houses[idx]-heaters[r]);
                    idx++;
                }
                else{
                    l++;r++;
                }
            }
            else{
                int cur = min( houses[idx] -heaters[l],heaters[r] -houses[idx]);
                ret = max(cur,ret);
                idx++;
            }
        }
        return ret;
    }
};

int main()
{
    //[25921153,510616708]
    //[771515668,357571490,44788124,927702196,952509530]
    //
    vector<int> a = {25921153,510616708};
    vector<int> b = {771515668,357571490,44788124,927702196,952509530};
    Solution s;
    int res = s.findRadius(a,b);
    cout<<res;
    return 0;
}

#endif

