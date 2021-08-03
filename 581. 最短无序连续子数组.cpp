#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findUnsortedSubarray(vector<int>& nums)
	{
		int minn = INT_MAX;
		int maxn = INT_MIN;
		int n = nums.size();
		int left = -1, right = -1;
		for (int i = 0; i < n; i++)
		{
			if (maxn > nums[i]) right = i;
			else maxn = nums[i];

			if (minn < nums[n - i - 1]) left = n-i - 1;
			else minn = nums[n - i - 1];
		}
		return right == -1 ? 0 : right - left + 1;
	}
};

#endif