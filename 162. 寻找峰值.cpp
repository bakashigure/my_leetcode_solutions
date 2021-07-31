#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findPeakElement(vector<int>& nums)
	{
		int pre = nums[0];
		nums.push_back(-2147483648);
		for (int i = 1; i < nums.size()-1; i++)
		{
			int cur = nums[i];
			int nxt = nums[i + 1];
			if (cur > pre && cur > nxt)
				return i;
			pre = cur;
		}
		return 0;
	}
};

#endif