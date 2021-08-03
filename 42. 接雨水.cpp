#if 0

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int trap(vector<int>& height)
	{
		int m = height.size();
		int l = 0, r = m - 1;
		int ans = 0;
		int leftm = 0, rightm = 0;
		while (l < r)
		{
			leftm = max(leftm, height[l]);
			rightm = max(rightm, height[r]);
			if (height[l] < height[r]) {
				ans += leftm - height[l];
				l++;
			}
			else {
				ans += rightm - height[r];
				r--;
			}

		}
		return ans;
	}
};


#endif
