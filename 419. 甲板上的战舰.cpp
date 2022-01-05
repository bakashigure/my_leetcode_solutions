//
// Created by bakashigure on 12/20/2021.
//
#if 0

#include <bits/stdc++.h>
#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&-x)
#define v2(m,n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IOS ios::sync_with_stdio(false);
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

using namespace std;

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ret = 0,m = board.size(),n=board[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {   // 投机倒把，判断一个点左边和上面是否有其他点
                //
                    if(i>0 && board[i-1][j] == 'X') continue;
                    if(j>0 && board[i][j-1] == 'X') continue;
                    if(board[i][j] == 'X') ret++;

            }
        return ret;
    }
};

#endif

