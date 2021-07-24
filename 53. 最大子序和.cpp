#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/* 分治, 递归 https://leetcode-cn.com/problems/maximum-subarray/solution/zui-da-zi-xu-he-by-leetcode-solution/
	 对于区间[l,r] 定义:
		lSum表示区间内以l为左端点的最大子段和
		rSum表示区间内以r为右端点的最大子段和
		mSum表示区间内的最大子段和
		iSum表示区间和

		取m= (l+r)/2 即重点, 分[l,m]为左子区间,[m+1,r]为右子区间
		对于长度为1的区间,四个值{1,1,1,1}
		对于长度大于1的区间:
			区间iSum等于'左子区间'的iSum+'右子区间'的iSum
			区间lSum等于'左子区间'的lSum或者'左子区间'的iSum加上'右子区间'的lSum
			区间rSum等于'右子区间'的rSum或者'左子区间'的rSum加上'右子区间'的iSum
			区间mSum不一定跨越m, 所以mSum可能是'左子区间'的mSum或者'右子区间'的mSum或者'左子区间'的rSum加上'右子区间'的lSum, 三者取大
	*/

	struct Status
	{
		Status(int _lSum, int _rSum, int _mSum, int _iSum) {
			lSum = _lSum;
			rSum = _rSum;
			mSum = _mSum;
			iSum = _iSum;
		}
		int lSum, rSum, mSum, iSum;
	};

	Status pushUp(Status l, Status r)
	{
		int iSum = l.iSum + r.iSum;
		int lSum = max(l.lSum, l.iSum + r.lSum);
		int rSum = max(r.rSum, l.rSum + r.iSum);
		int mSum = max(l.rSum + r.lSum, max(l.mSum, r.mSum));
		return Status(lSum, rSum, mSum, iSum);
	};

	Status get(vector<int>& nums, int l, int r) {
		if (l == r) return Status(nums[l], nums[l], nums[l], nums[l]);
		int m = (l + r) >> 1;
		Status lSub = get(nums,l, m);
		Status rSub = get(nums, m + 1, r);
		return pushUp(lSub, rSub);
	}

	int maxSubArray(vector<int>& nums) {
		return get(nums, 0, nums.size() - 1).mSum;
	}


	/* 前缀和? & dp
	int maxSubArray(vector<int>& nums)
	{
		int n = nums.size();
		int _max = nums[0];
		int pre = 0;
		for (auto x : nums)
		{
			pre = max(pre + x, x);
			_max = max(pre, _max);
		}
		return _max;
	}
	*/
};


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	Solution s;
	vector<int> nums = { 1 };
	cout<<s.maxSubArray(nums);
	return 0;

}
#endif
