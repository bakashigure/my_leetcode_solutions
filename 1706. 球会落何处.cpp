//
// Created by bakashigure on 2/24/2022.
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
    vector<int> findBall(vector<vector<int>>& grid) {
        if(grid[0].size() == 1) return {-1};
        vector<vector<int>> cache(grid.size(), vector<int>(grid[0].size(), INF));
        function<int(int, int)> fun = [&](int row, int col) {
            if (col < 0 || col >= grid[0].size()) return -1;
            if (row == grid.size()) {
                return col;
            }
            if (cache[row][col] != INF) return cache[row][col];
            else {
                if (row >= grid.size()) {
                    cache[row][col] = col;
                    return col;
                } else {
                    if (grid[row][col] == 1 && col < grid[0].size() && grid[row][col + 1] == 1) {
                        cache[row][col] = fun(row + 1, col + 1);
                        return cache[row][col];
                    } else if (grid[row][col] == -1 && col > 0 && (grid[0].size() > 1) && grid[row][col - 1] == -1) {
                        cache[row][col] = fun(row + 1, col - 1);
                        return cache[row][col];
                    } else {
                        cache[row][col] = -1;
                        return -1;
                    }
                }
            }
        };
        for (int i = 0; i < grid[0].size(); i++) {
            fun(0, i);
        }
        return cache[0];
    }
};

int main()
{
    Solution s;
    vector<vector<int>> vec = {{1}};
    auto v = s.findBall(vec);
    for(auto it:v)
        cout<<it<<" ";

}

#endif

