//
// Created by bakashigure on 2/12/2022.
//
#if 1

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
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        unordered_map<int, int> vis;
        queue<int> s;
        int ret = 0;
        int dirs[4][2] = {{0,  1},
                          {0,  -1},
                          {1,  0},
                          {-1, 0}};
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                    if (grid[i][j] == 1) {
                        s.emplace(i * n + j);
                        vis[i*n+j]=1;
                    }
            }
        }
        while (!s.empty()) {
            int i = s.front() / n;
            int j = s.front() % n;
            s.pop();
            for (auto& dir: dirs) {
                int nx = i + dir[0];
                int ny = j + dir[1];
                if (nx < 0 || nx >= m || ny < 0 || ny >= n || vis[nx * n + ny] || grid[nx][ny] == 0) continue;
                vis[nx * n + ny] = 1;
                s.emplace(nx * n + ny);
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                    if (grid[i][j] == 1 && !vis[i * n + j]) ret++;
            }
        }
        return ret;
    }

};

int main()
{
    vector<vector<int>> sb{{0},{1},{1},{0},{0}};
    Solution s;
    s.numEnclaves(sb);
    return 0;
}

#endif