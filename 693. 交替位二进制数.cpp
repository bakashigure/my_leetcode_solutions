//
// Created by bakashigure on 3/28/2022.
//
#if 0

/*
 * 给定一个正整数，检查它的二进制表示是否总是 0、1 交替出现：换句话说，就是二进制表示中相邻两位的数字永不相同。
 * */

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
    bool hasAlternatingBits(int n) {
        int f[31] = {1,2,5,10,21,42,85,170,341,682,1365,2730,5461,10922,21845,43690,87381,174762,349525,699050,1398101,2796202,5592405,11184810,22369621,44739242,89478485,178956970,357913941,715827882,1431655765};

/*

        int start = 0;
        int p = 0;
        int flag = 0;
        for(int i=0;i<32;i++)
        {
            start <<= 1;
            f[flag] = start|p;
            p^=1;
            flag++;
        }
        for(auto it:f)
            cout<<it<<",";
*/

        if(find(f,f+31,n)!=f+31 ) return true;
        return false;
    }
};

#endif
