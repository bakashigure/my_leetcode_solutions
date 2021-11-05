#if 0
//#define vector2(a,b) vector<vector<int>> ((a),vector<int>((b)))

#include <__msvc_all_public_headers.hpp>
using namespace std;
class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		int n = nums.size();
		function<void(int cur)> backtace = [&](int cur) {
			if (cur == n) {
				res.push_back(nums);
				return;
			}
			for (int i = cur; i < n; i++)
			{
				swap(nums[i], nums[cur]);
				backtace(cur + 1);
				swap(nums[i], nums[cur]);
			}

		};
		backtace(0);
		return res;
	}
};



#endif