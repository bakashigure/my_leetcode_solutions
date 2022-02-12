//
// Created by bakashigure on 2/8/2022.
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
    vector<int> gridIllumination(int n, vector<vector<int>>& lamps, vector<vector<int>>& queries) {
        vector<int> ret;
        int dirs[9][2] = {{0,  0},
                          {0,  1},
                          {1,  1},
                          {1,  0},
                          {1,  -1},
                          {0,  -1},
                          {-1, -1},
                          {-1, 0},
                          {-1, 1}};
        unordered_map<long, int> x, y, left, right;
        set<long long> lamp;
        for (const auto& l: lamps) {
            if (!lamp.count((long long)(l[0]) * n + l[1])) {
                x[l[0]]++;
                y[l[1]]++;
                left[l[0] + l[1]]++;
                right[l[0] - l[1]]++;
                lamp.emplace((long long)(l[0]) * n + l[1]);
            }
        }
        for (const auto& q: queries) {
            if (x[q[0]] > 0 || y[q[1]] > 0 || left[q[0] + q[1]] > 0 || right[q[0]-q[1]] > 0) ret.emplace_back(1);
            else ret.emplace_back(0);
            for (auto& dir: dirs) {
                long long nx = q[0] + dir[0], ny = q[1] + dir[1];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if (lamp.count(nx * n + ny)) {
                    lamp.erase(nx * n + ny);
                    x[nx]--;
                    y[ny]--;
                    left[nx+ny]--;
                    right[nx-ny]--;
                }
            }

        }
        return ret;
    }
};

int main() {
    int n = 5;
    vector<vector<int>> lamps = {{0, 0},
                                 {4, 4}};
    vector<vector<int>> query = {{1, 1},
                                 {1, 0}};
    Solution s;
    s.gridIllumination(n, lamps, query);
    return 0;
}

#endif

