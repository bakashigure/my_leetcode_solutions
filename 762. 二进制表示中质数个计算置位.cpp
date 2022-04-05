//
// Created by bakashigure on 4/5/2022.
//

//给你两个整数  left 和 right ，在闭区间 [left, right] 范围内，统计并返回 计算置位位数为质数 的整数个数。
//
//计算置位位数 就是二进制表示中 1 的个数。
//
//例如， 21 的二进制表示 10101 有 3 个计算置位。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/prime-number-of-set-bits-in-binary-representation
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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
    int countPrimeSetBits(int left, int right) {
        int ret = 0;
        while(left<=right)
        {
            int v = __builtin_popcount(left); // 计算有多少个1
            if(v == 2 || v == 3 || v==5 ||v==7 ||v==11 ||v==13||v==17||v==19) ++ret;
            left++;
        }
        return ret;
    }
};

#endif