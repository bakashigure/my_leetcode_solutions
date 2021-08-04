#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int triangleNumber(vector<int>& nums)
	{
		sort(begin(nums), end(nums));
		int n = nums.size();
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int k = i;
			for (int j = i + 1; j < n; j++)
			{
				while (k+1 < n && nums[k+1] < nums[i] + nums[j]) k++;
				ans += max(k - j, 0);
			}
		}
		return ans;

	}
};
#endif