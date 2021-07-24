#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	// Ë«Ö¸Õë
	vector<int> intersect(vector<int>& nums1, vector<int>nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		int n = nums1.size();
		int m = nums2.size();
		int p = 0, q = 0;
		vector<int> res;
		
		while (p < n && q < m)
		{
			if (nums1[p] == nums2[q])
			{
				res.push_back(nums1[p]);
				++p;
				++q;
			}
			else if (nums1[p] > nums2[q]) ++q;
			else if (nums1[p] < nums2[q]) ++p;
		}
		return res;

	}
};

int main()
{

}

#endif