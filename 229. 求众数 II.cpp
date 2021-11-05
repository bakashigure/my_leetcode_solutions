#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;

class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {
		vector<int> ans;
		int a = nums[0];
		int b = nums[0];
		int c1 = 0;
		int c2 = 0;
		for (auto& it : nums)
		{
			if (c1 > 0 && it == a)c1++;
			else if (c2 > 0 && it == b) c2++;
			else if (c1 == 0) {
				a = it; c1++;
			}
			else if (c2 == 0)
			{
				b = it;
				c2++;
			}
			else
			{
				c1--;
				c2--;
			}
		}

		c1 = 0;
		c2 = 0;
		for (auto& num : nums)
		{
			if (num == a) c1++;
			if (num == b) c2++;
		}
		if (c1 > nums.size() / 3) ans.push_back(a);
		if (c2 > nums.size() / 3 && a!=b) ans.push_back(b);
		return ans;
	}
};

#endif