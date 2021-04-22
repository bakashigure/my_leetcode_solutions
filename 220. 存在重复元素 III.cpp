#if 0
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define ll long long

// »¬¶¯´°¿Ú
using namespace std;

class Solution
{
public:
	bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t)
	{
		set<ll> st;
		int left = 0;
		int n = nums.size();
		for (int right = 0; right < n; right++)
		{
			if (right - left > k)
			{
				st.erase(nums[left]);
				left++;
			}

			auto a = st.lower_bound((ll)nums[right] - t);
			if (a != st.end() && (abs(*a - nums[right]) <= t))
				return true;
			st.insert(nums[right]);

		}
		return false;
	}
};

int main()
{
	vector<int> nums = { 1,5,9,1,5,9 };
	int k = 2;
	int t = 3;
	Solution s;
	if (s.containsNearbyAlmostDuplicate(nums, k, t))
		printf("true");
	else
		printf("false");
	return 0;
}

#endif // 1
