//
// Created by bakashigure on 3/15/2022.
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

// 整点快排

int partition(vector<int>& nums,int left,int right){
    int i = rand()%(right-left+1)+left;
    swap(nums[i],nums[left]);
    int p = nums[left];
    while (left < right) {
        while (left < right && nums[right] >= p)
            right--;
        nums[left] = nums[right];
        while (left < right && nums[left] <= p)
            left++;
        nums[right] = nums[left];
    }
    nums[left] = p;
    return left;
};


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        function<void(int,int)> qsort = [&](int left,int right) {
            if (left < right) {
                int p = partition(nums,left,right);
                qsort(left,  p - 1);
                qsort(p + 1, right);
            };
        };
        qsort(0,nums.size()-1);
        return nums;
    }
};

int main()
{
    vector<int> nums{5,2,3,1};
    Solution s;
    s.sortArray(nums);
    for(auto it:nums)
        cout<<it;
}

#endif
