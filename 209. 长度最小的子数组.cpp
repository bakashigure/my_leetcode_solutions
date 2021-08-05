#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int minSubArrayLen(int target, vector<int>& nums)
	{
		int ans = INT_MAX;
		int n = nums.size();
		int tmp = 0;
		int l = 0, r = 0;
		while (r < n)
		{
			tmp += nums[r];
			while (tmp >= target) {
				ans = min(ans, r - l + 1);
				tmp -= nums[l];
				l++;
			}
			r++;
		}
		return ans==INT_MAX?0:ans;
	}
}s;

int main()
{
	vector<int> nums = { 2,3,1,2,4,3 };
	int target = 1;
	cout << s.minSubArrayLen(target,nums);

}

#endif