#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int rob(vector<int>& nums)
	{
		int n = nums.size();
		if (n == 1) return nums[0];
		int first = nums[0];
		int second = max(nums[0], nums[1]);
		int tmp = 0;
		for (int i = 2; i < n; i++)
		{
			tmp = second;
			second = max(first + nums[i], second);
			first = tmp;
		}
		return second;
	}
};

#endif