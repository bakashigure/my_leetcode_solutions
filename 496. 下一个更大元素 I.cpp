#if 0
#include <__msvc_all_public_headers.hpp>
using namespace std;

class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
	{
		unordered_map<int, int> m;
		stack<int> s;
		int n = nums2.size();
		for (int i = n - 1; i >= 0; --i)
		{
			int num = nums2[i];
			while (!s.empty() && num >= s.top())
				s.pop();
			m[num] = s.empty() ? -1 : s.top();
			s.push(num);
		}
		vector<int> res(nums1.size());
		for (int i = 0; i < nums1.size(); i++)
			res.push_back(m[nums1[i]]);
		return res;
	}
};


#endif