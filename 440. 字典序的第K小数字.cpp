//
// Created by bakashigure on 3/31/2022.
//

// https://leetcode-cn.com/problems/k-th-smallest-in-lexicographical-order/
// 给定整数 n 和 k，返回  [1, n] 中字典序第 k 小的数字。


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
    int findKthNumber(int n, int k) {

        auto totalNodes = [](int n, long cur) {
            long next = cur + 1;
            int total = 0;
            while (n >= cur) {
                total += min(n - cur + 1, next - cur);
                cur *= 10;
                next *= 10;
            }
            return total;
        };

        long cur = 1;
        k -= 1;
        while (k > 0) {
            int nodes = totalNodes(n, cur);
            if (k >= nodes) {
                k -= nodes;
                cur++; // 向右找
            } else {
                k -= 1;
                cur *= 10; // 向下找
            }
        }
        return int(cur);


    }
};

#endif
