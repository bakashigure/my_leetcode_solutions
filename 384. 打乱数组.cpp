//
// Created by bakashigure on 11/22/2021.
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
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

using namespace std;
class Solution {
public:
    Solution(vector<int>& nums) {
        _nums = nums;
        origin.resize(nums.size());
        copy(nums.begin(),nums.end(),origin.begin());
    }

    vector<int> reset() {
        return origin;
    }

    vector<int> shuffle() {
        auto r = [](int x){
            return random()%x;
        };

        for(int i = 0;i < _nums.size();i++)
            swap(_nums[i],_nums[i+r(_nums.size()-i)]);
        return _nums;
    }
private:
    vector<int> _nums;
    vector<int> origin;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

#endif