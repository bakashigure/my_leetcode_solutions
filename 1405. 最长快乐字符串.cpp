//
// Created by bakashigure on 2/7/2022.
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
    string longestDiverseString(int a, int b, int c) {
        string ret;
        auto cmp = [](pair<int, char>& lhs, pair<int, char>& rhs) { return lhs.first < rhs.first; };
        priority_queue<pair<int, char>, vector<pair<int, char>>, decltype(cmp)> pq(cmp);
        pq.emplace(pair<int, char>{a, 'a'});
        pq.emplace(pair<int, char>{b, 'b'});
        pq.emplace(pair<int, char>{c, 'c'});
        while (true) {
            auto cur = pq.top();
            pq.pop();
            if (cur.first <= 0) break;
            int n = ret.length();
            if (n >= 2&&ret[n-1]==cur.second&&ret[n-2]==cur.second)
            {
                auto nxt = pq.top();
                pq.pop();
                if(nxt.first==0) break;
                ret.push_back(nxt.second);
                nxt.first--;
                pq.emplace(nxt);
                pq.emplace(cur);
            }
            else{
                ret.push_back(cur.second);
                cur.first--;
                pq.emplace(cur);
            }
        }
        return ret;
    }
};

int main()
{
    Solution s;
    s.longestDiverseString(1,1,7);
    return 0;
}

#endif

