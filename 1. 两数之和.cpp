#if 0
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		int n = nums.size();
		unordered_map<int, int> m;
		for (int i=0;i<n;i++)
		{
			unordered_map<int, int>::iterator it;
			it = m.find(target - nums[i]);
			if (it != m.end()) return { it->second,i };
			m[nums[i]] = i;

		}
		return {};

	}
}s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> nums = { 2,7,11,15 };
	int target = 9;
	for (auto i : s.twoSum(nums, target))
		cout << i << " ";
	return 0;
	
}

#endif 