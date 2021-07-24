#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/* ����, �ݹ� https://leetcode-cn.com/problems/maximum-subarray/solution/zui-da-zi-xu-he-by-leetcode-solution/
	 ��������[l,r] ����:
		lSum��ʾ��������lΪ��˵������Ӷκ�
		rSum��ʾ��������rΪ�Ҷ˵������Ӷκ�
		mSum��ʾ�����ڵ�����Ӷκ�
		iSum��ʾ�����

		ȡm= (l+r)/2 ���ص�, ��[l,m]Ϊ��������,[m+1,r]Ϊ��������
		���ڳ���Ϊ1������,�ĸ�ֵ{1,1,1,1}
		���ڳ��ȴ���1������:
			����iSum����'��������'��iSum+'��������'��iSum
			����lSum����'��������'��lSum����'��������'��iSum����'��������'��lSum
			����rSum����'��������'��rSum����'��������'��rSum����'��������'��iSum
			����mSum��һ����Խm, ����mSum������'��������'��mSum����'��������'��mSum����'��������'��rSum����'��������'��lSum, ����ȡ��
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


	/* ǰ׺��? & dp
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
