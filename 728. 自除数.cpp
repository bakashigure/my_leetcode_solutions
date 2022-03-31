//
// Created by bakashigure on 3/31/2022.
//
#if 0

// https://leetcode-cn.com/problems/self-dividing-numbers/
//自除数 是指可以被它包含的每一位数整除的数。
//
//例如，128 是一个 自除数 ，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。
//自除数 不允许包含 0 。
//
//给定两个整数 left 和 right ，返回一个列表，列表的元素是范围 [left, right] 内所有的 自除数 。


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
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        auto ok = [](int num) {
            int tmp = num;
            while (tmp > 0) {
                int digit = tmp % 10;
                if (digit == 0 || num % digit != 0) return false;
                tmp /= 10;
            }
            return true;
        };
        for (; left <= right; left++) {
            if (ok(left))
                ret.emplace_back(left);
        }
        return ret;
    }
};

#endif

