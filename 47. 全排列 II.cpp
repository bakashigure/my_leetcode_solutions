#if 0
#include <__msvc_all_public_headers.hpp>
using namespace std;

class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		int n = nums.size();
		vector<int> perm;
		vector<int> visited;
		visited.resize(n);
		sort(nums.begin(), nums.end());
		vector<vector<int> > res;
		function<void(int cur)> backtrace = [&](int cur) {
			if (cur == n) {
				res.emplace_back(perm);
				return;
			}

			for (int i = 0; i < n; i++)
			{
				if (visited[i] ||( i > 0 && nums[i] == nums[i - 1] && !visited[i-1]))
					continue;

				perm.emplace_back(nums[i]);
				visited[i] = 1;
				backtrace(cur + 1);
				visited[i] = 0;
				perm.pop_back();
			}
		};
		backtrace(0);
		return res;
	}
};

#endif