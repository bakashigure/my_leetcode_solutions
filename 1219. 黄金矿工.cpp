//
// Created by bakashigure on 2/5/2022.
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
    static constexpr int dirs[4][2] = {{-1, 0},
                                       {1,  0},
                                       {0,  -1},
                                       {0,  1}};

    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ret = 0;
        function<void(int, int, int)> dfs = [&](int x, int y, int gold) {
            gold += grid[x][y];
            ret = max(ret, gold);
            int cur = grid[x][y];
            grid[x][y] = 0;
            for (auto& dir: dirs) {
                int nx = x + dir[0];
                int ny = y + dir[1];
                if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                if (grid[nx][ny] == 0) continue;
                dfs(nx, ny, gold);
            }
            grid[x][y] = cur;
        };
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]!=0)
                {
                    dfs(i,j,0);
                }
            }
        }
        return ret;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> g = {{0,6,0},{5,8,7},{0,9,0}};
    cout<< s.getMaximumGold(g);
    return 0;
}

#endif


