#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		int n = nums.size();
		if (n == 0) return vector<int> { -1, -1 };
		else if (n == 1 && nums[0] == target) return{ 0,0 };
		int l = 0, r = n;
		while (l < r)
		{
			int mid = (l + r) >> 1;
			if (nums[mid] > target)
			{
				r = mid;
			}
			else if(nums[mid]<target)
			{
				l = ++mid;
			}
			else if (nums[mid] == target)
			{
				l = mid;
				r = mid;
				break;
			}
		}
		if (l == n) return { -1,-1 };
		if (nums[l] != target) return{ -1,-1 };
		for (int i = l-1; i >= 0; i--)
		{
		if (nums[i] == target)
				l--;
		}
		for (int i = r+1; i < n; i++)
		{
			if (nums[i] == target)
				r++;
		}
		return { l,r };


	}
}s;


int main()
{
	vector<int> nums = {0,0,0,1,2,3};
	int target = 0;
	for (auto ans : s.searchRange(nums, target))
		cout << ans << " ";
	return 0;

}
#endif