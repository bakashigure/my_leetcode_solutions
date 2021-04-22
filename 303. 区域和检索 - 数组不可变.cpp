#if 1
#include <iostream>
#include <vector>

using namespace std;

/* 前缀和解法*/
class NumArray {
public:
	int sum[100001] = { 0 };
	NumArray(vector<int>& nums)
	{
		int n = nums.size();
		sum[0] = nums[0];
		for(int i=1;i<n;i++)
		{
			sum[i] = sum[i - 1] + nums[i-1];
		}
	}
	int sumRange(int left, int right)
	{
		return sum[right+1] - sum[left];
	}

};


/* 朴素解法
class NumArray {
public:
	vector<int> num;
	int n;
	NumArray(vector<int>& nums) {
		num=nums;
		n = nums.size();
	}

	int sumRange(int left, int right) {
		int sum=0;
		for (; left <= right; left++)
			sum += num[left];
		return sum;

	}
};
*/
int main()
{
	//vector<vector<int> > nums;
	vector<int> nums = { -2,0,3,-5,2,-1 };
	NumArray* obj = new NumArray(nums);
	int left = 0;
	int right = 2;
	int param_1 = obj->sumRange(left, right);
	cout << param_1;
	return 0;
}

#endif // 1
