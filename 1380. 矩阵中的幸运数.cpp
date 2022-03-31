//
// Created by bakashigure on 2/15/2022.
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
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ret;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                bool isMax = true;
                if (*min_element(matrix[i].begin(), matrix[i].end()) != matrix[i][j]) {
                    continue;
                }
                for (int k = 0; k < matrix.size(); ++k) {
                    if (matrix[i][j] < matrix[k][j]) {
                        isMax = false;
                        break;
                    }
                }
                if (isMax) {
                    ret.emplace_back(matrix[i][j]);
                    return ret;
                }
            }
        }
        return ret;
    }
};

#endif

