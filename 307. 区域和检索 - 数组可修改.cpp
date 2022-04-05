//
// Created by bakashigure on 4/4/2022.
//

//给你一个数组 nums ，请你完成两类查询。
//
//其中一类查询要求 更新 数组 nums 下标对应的值
//        另一类查询要求返回数组 nums 中索引 left 和索引 right 之间（ 包含 ）的nums元素的 和 ，其中 left <= right
//        实现 NumArray 类：
//
//NumArray(int[] nums) 用整数数组 nums 初始化对象
//void update(int index, int val) 将 nums[index] 的值 更新 为 val
//int sumRange(int left, int right) 返回数组 nums 中索引 left 和索引 right 之间（ 包含 ）的nums元素的 和 （即，nums[left] + nums[left + 1], ..., nums[right]）
// 
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/range-sum-query-mutable
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

#if 0

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
//#define lowbit(x) (x&-x)
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

#include <bits/stdc++.h>

using namespace std;

class NumArray{
private:
    vector<int> tree;
    vector<int> nums;
    static int lowbit(int x) { return x&-x; }

public:
    NumArray(vector<int> _nums){
        nums = _nums;
        tree = vector<int>(nums.size()+1);
        for(int i=0;i<nums.size();i++)
        {
            add(i+1,nums[i]);
        }
    }
    void add(int i, int u) {
        while (i <= nums.size()) {
            tree[i] += u;
            i += lowbit(i);
        }
    }
    int query(int i) {
        int ret = 0;
        while (i > 0) {
            ret += tree[i];
            i -= lowbit(i);
        }
        return ret;
    }

    // 在 x 位置增加 u
    void update(int i, int u) {
        add(i+1,u-nums[i]);
        nums[i]= u;
    }

    int sumRange(int left,int right){
        return query(right+1) - query(left);
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */


#endif