//
// Created by bakashigure on 11/16/2021.
//
#if 0

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&-x)
#define v2(m, n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>

ll qpow(ll p, ll q) {
    ll f = 1;
    while (q) {
        if (q & 1)f = f * p;
        p = p * p;
        q >>= 1;
    }
    return f;
}

using namespace std;

class Solution {
public:
    bool isRectangleCover(vector<vector<int>> & rectangles) {
        map<pii, int> f;
        int min_row = INF, min_col = INF, max_row = (-INF), max_col = (-INF);
        ll ans = 0;
        for (auto & rec: rectangles) {
            min_row = min(rec[0], min_row);
            min_col = min(rec[1], min_col);
            max_row = max(rec[2], max_row);
            max_col = max(rec[3], max_col);
            f[{rec[0], rec[1]}]++;
            f[{rec[0], rec[3]}]++;
            f[{rec[2], rec[1]}]++;
            f[{rec[2], rec[3]}]++;
            ans += (ll) (rec[2] - rec[0]) * (rec[3] - rec[1]);
        }
        if (ans != (max_row - min_row) * (max_col - min_col) || !f.count({min_row, min_col}) ||
            !f.count({min_row, max_col}) || !f.count({max_row, min_col}) || !f.count({max_row, max_col}))
            return false;
        f.erase({min_row, min_col});
        f.erase({min_row, max_col});
        f.erase({max_row, min_col});
        f.erase({max_row, max_col});
        for (auto & p: f)if (p.second != 2 && p.second != 4) return false;
        return true;
    }
};

int main() {
    Solution s;
    vector<vector<int>> fa = {{1, 1, 3, 3},
                              {3, 1, 4, 2},
                              {1, 3, 2, 4},
                              {2, 2, 4, 4}};
    vector<vector<int>> fb = {{1, 1, 3, 3},
                              {3, 1, 4, 2},
                              {3, 2, 4, 4},
                              {1, 3, 2, 4},
                              {2, 3, 3, 4}};
    cout << s.isRectangleCover(fb);
    return 0;
}


#endif