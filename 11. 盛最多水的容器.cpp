#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height)
	{
		int max_size = 0;
		int l = 0, r = height.size()-1;
		while (l < r)
		{
			max_size = max(max_size, min(height[l], height[r]) * (r - l));
			if (height[l] <= height[r]) l++;
			else r--;
	
		}
		return max_size;
	}

}s;

int main()
{
	vector<int> height = { 1,8,6,2,5,4,8,3,7 };
	cout << s.maxArea(height);
	return 0;
}

#endif
