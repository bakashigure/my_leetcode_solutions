#if 0

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int findMin(vector<int>& nums)
	{
		int m = nums.size();
		if (m == 1) return nums[0];
		int l = 0, r = m - 1;
		while (l < r)
		{
			int mid = (l + r) >> 1;

			if (nums[mid] < nums[r])
			{
				r = mid;
			}
			else
				l = mid+1;
		}
		return nums[l];
	}

};

int main()
{

}

#endif