//
// Created by bakashigure on 1/9/2022.
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
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int prev = 0;
        int prev_t = releaseTimes[0];
        char max_c = keysPressed[0];
        int max_t = releaseTimes[0];
        for(int i = 1;i<keysPressed.length();i++)
        {
            int tmp = releaseTimes[i] - releaseTimes[i-1];
            if(tmp > max_t)
            {
                max_t = tmp;
                max_c = keysPressed[i];
            }
            else if(tmp == max_t)
            {
                if(max_c < keysPressed[i])
                {
                    max_c = keysPressed[i];
                }

            }
        }
        return max_c;
    }
};

#endif

