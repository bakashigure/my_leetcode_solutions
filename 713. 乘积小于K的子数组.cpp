#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;

class Solution {
public:
	int numSubarrayProductLessThanK(vector<int>& nums, int k) {
		int n = nums.size();
		if (n == 1) return nums[0] < k ? 1 : 0;
		if (k <=1) return 0;
		int l = 0, r = 0, cur = 1;
		int ans = 0;
		for (; r < n; r++)
		{
			cur *= nums[r];
			while (cur >= k)
			{
				cur /= nums[l];
				l++;
			}
			ans += r - l + 1;
		}
		return ans;
	}
};

int main()
{

}


#endif	