//
// Created by bakashigure on 12/8/2021.
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
    /* 定义f[i][j] 为前i个数，凑出j个无重叠子数组的最大值
     * 对于数num[i], 有选和不选两种情况,
     * 选了, f[i][j] = f[i-k][j-1] + sum[i]-sum[i-k]
     * 不选, f[i][j] = f[i-1][j] ,即num[i]为f[i][j]是否最大无贡献
     */
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        //reverse(nums.begin(), nums.end());
        vector<long> sum(nums.size() + 1);
        vector<vector<long>> f(nums.size() + 2, vector<long>(4));
        vector<int> ret(3);
        for (int i = 1; i <= nums.size(); i++) sum[i] = sum[i - 1] + nums[i - 1];
        for (int i = k; i <= nums.size(); i++)
            for (int j = 1; j < 4; j++)
                f[i][j] = max(f[i - 1][j], f[i - k][j - 1] + sum[i] - sum[i - k]);

        int i = nums.size(),j=3,idx = 2;
        while(j)
        {
            if(f[i-1][j]>=f[i - k][j - 1] + sum[i] - sum[i - k]) i--;
            else {
                ret[idx--] = i-k;
                i-=k;
                j--;
            }
        }
        return ret;


    }
};

#endif

