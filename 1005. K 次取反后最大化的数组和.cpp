//
// Created by bakashigure on 12/6/2021.
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
    // 没看数据范围, -100 ~ 100, 用个哈希表可以省去排序所需时间
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), less<>());
        int _min = 0;
        int i = 0;
        for (; i < nums.size(); ++i) {
            if (!k) break;
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                _min = nums[i] > nums[_min] ? _min : i;
                k--;
            }
            else break;
        }
        if(i==nums.size()) i--;
        if(k&1){
            _min = nums[i]>nums[_min]?_min:i;
            nums[_min] = -nums[_min];
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-4,-2,-3};
    cout<<s.largestSumAfterKNegations(nums,4);

    return 0;
}
#endif