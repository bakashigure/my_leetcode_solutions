#if 1
#include <iostream>
#include <vector>
#include <unordered_map>

/*要找相同数量的0和1组成的子串，即把1变成-1后, 相加为0的最长子串
* 前缀和
* 
* 
*/
using namespace std;

class Solution {
public:
	int findMaxLength(vector<int>& nums) {
		int n = nums.size();
		unordered_map<int, int> m;
		int ans = 0;
		int cnt = 0;
		m[0] = -1;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 1) ++cnt;
			else --cnt;
			auto p = m.find(cnt);
			if (p != m.end()) ans = max(ans, i - p->second);
			else
				m[cnt] = i;
		}

		return ans;
	}
};

int main()
{
	vector<int> nums = { 0,1};
	Solution s;
	int res = s.findMaxLength(nums);
	cout << res;
	return 0;
}
#endif