//
// Created by bakashigure on 2/17/2022.
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
    double knightProbability(int n, int k, int row, int column) {
        int dirs[8][2] = {{-2, 1},
                          {-1, 2},
                          {1,  2},
                          {2,  1},
                          {2,  -1},
                          {1,  -2},
                          {-1, -2},
                          {-2, -1}};
        vector<vector<vector<double>>> vec(k+1,vector<vector<double>>(n+1,vector<double>(n+1)));
        for(int step = 0;step<=k;++step)
        {
            for(int i=0;i<n;i++)
            {
                for(int j = 0;j<n;j++)
                {
                    if(step==0)
                        vec[0][i][j] = 1;
                    else{
                        for(auto& dir:dirs)
                        {
                            int ni = i+dir[0];
                            int nj = j+dir[1];
                            if(ni>=0&&ni<n&&nj>=0&&nj<=n)
                                vec[step][i][j]+=vec[step-1][ni][nj]*0.125;
                        }
                    }
                }
            }
        }
        return vec[k][row][column];

    }
};

#endif

