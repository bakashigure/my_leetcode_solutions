//
// Created by bakashigure on 2/13/2022.
//
#if 0

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&-x)
#define v2(m, n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IOS ios::sync_with_stdio(false);

ll qpow(ll p, ll q) {
    ll f = 1;
    while (q) {
        if (q&1)f = f * p;
        p = p * p;
        q >>= 1;
    }
    return f;
}

using namespace std;

class Solution{
public:
    int maxNumberOfBalloons(string text) {
        int cnt[5]={0};
        int ret = INT_MAX;
        for (const char& c: text) {
            switch (c) {
                case 'b':
                    cnt[0]++;
                    break;
                case 'a':
                    cnt[1]++;
                    break;
                case 'l':
                    cnt[2]++;
                    break;
                case 'o':
                    cnt[3]++;
                    break;
                case 'n':
                    cnt[4]++;
                    break;
            }
        }
        cnt[2] >>= 1;
        cnt[3] >>= 1;
        for (int i = 0; i < 5; ++i)
            ret = min(ret, cnt[i]);
        return ret;
    }
};

int main()
{
    Solution s;
    s.maxNumberOfBalloons("wklfaojkpo");
    return 0;
}

#endif

