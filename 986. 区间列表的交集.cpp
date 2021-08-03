#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList)
	{
		int m = firstList.size();
		int n = secondList.size();
		int l = 0;
		int r = 0;
		vector<vector<int>> ans;
		while (l < m && r < n)
		{
			int lo = max(firstList[l][0], secondList[r][0]);
			int hi = min(firstList[l][1], secondList[r][1]);
			if (lo <= hi)
			{
				ans.push_back({ lo,hi });
			}
			if (firstList[l][1] >= secondList[r][1])
				r++;
			else l++;


		}
		return ans;

	}
};

#endif