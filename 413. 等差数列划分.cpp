#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int numberOfArithmeticSlices(vector<int>& nums)
	{
		int n = nums.size();
		if (n < 3) return 0;
		int ans = 0;
		int l = 0, r = 0;
		r++;
		while (r < n)
		{
			int tmp = nums[r] - nums[l];
			while ( r < n-1 && nums[r+1] - nums[r] == tmp) r++;
			if ((r - l) > 1)
			{
				ans += (double(r - l) / 2) * (r - l - 1);
			}
			l = r;
			r++;
		}
		return ans;
	}
};

#endif