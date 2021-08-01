#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	// ≈≈–Ú+À´÷∏’Î+»•÷ÿ
	vector<vector<int>> threeSum(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		int n = nums.size();
		vector<vector<int> > ans;
		for (int a = 0; a < n; ++a)
		{
			if (nums[a] > 0) return ans;
			int c = n - 1;
			int b = a + 1;
			if (a > 0 && nums[a] == nums[a - 1]) continue;
			while (b < c)
			{
				if (nums[a] + nums[b] + nums[c] == 0) {
					ans.push_back({ nums[a],nums[b],nums[c] });
					while (b < c && (nums[b] == nums[b + 1])) b++;
					while (b < c && (nums[c] == nums[c - 1])) c--;
					b++;
					c--;
				}
				else if (nums[a] + nums[b] + nums[c] > 0) c--;
				else b++;
			}
		}
		return ans;
	}
}s;

int main()
{
	vector<int> t = { -1,0,1,2,-1,-4 };
	for (auto i : s.threeSum(t))
	{
		for (auto it : i)
		{
			cout << it << " ";
		}
		cout << "\n";

	}
}

#endif