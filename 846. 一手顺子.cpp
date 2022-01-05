//
// Created by bakashigure on 12/31/2021.
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
    bool isNStraightHand(vector<int> hand, int groupSize) {
        int n = hand.size();
        if((n%groupSize)!=0) return false;
        if(groupSize==1) return true;
        unordered_map<int,int> f;
        priority_queue<int,vector<int>,greater<>> p;
        for(auto h:hand)
        {
            ++f[h];
            p.push(h);
        }
        for(int i = n/groupSize;i>0;i--)
        {
            int min = p.top();
            p.pop();
            if(f[min]==0){
                i++;
                continue;
            }
            for(int j = 0;j<groupSize;++j)
            {
                if(f[min]==0) return false;
                f[min]--;
                min++;
            }
        }
        return true;

    }
};

int main()
{
    Solution s;
    s.isNStraightHand(vector<int>{1,2,3,6,2,3,4,7,8},3);
}

#endif


