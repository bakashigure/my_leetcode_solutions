//
// Created by bakashigure on 11/12/2021.
//
#if 0
#include <bits/stdc++.h>
#define v2(a,b) vector<vector<int> > (a,vector<int>(b))
#define INF 0x3f3f3f

using namespace std;

class Solution {
public:
    int getMoneyAmount(int n) {
        auto f = v2(n+1,n+1);
        // f(i,j) = min{ k + max(f(i,k-1),f(k+1,j))} for i<=k<=j;
        for(int i = n-1;i>=1;--i)
        {
            for(int j = i+1;j<=n;j++)
            {
                int minCost = INF;
                for(int k=i;k<j;k++)
                {
                    int cost = k+max(f[i][k-1],f[k+1][j]);
                    minCost = min(minCost,cost);
                }
                f[i][j] = minCost;
            }
        }
        return f[1][n];

    }
};

int main()
{
    Solution s;
    cout << s.getMoneyAmount(3);
    return 0;
}


#endif
