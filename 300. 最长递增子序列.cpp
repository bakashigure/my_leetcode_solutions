#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

	/* ̰��+����
	* ̰��Ҫ�����е����һ��ֵ�����ı�С��
	* ά��һ������g, g[i]��ʾ������Ϊ[i]������������е����һ��Ԫ�ص����ֵ
	* ���� 10 9 11 5 3 7 101 18
	* 10
	* 9
	* 9 11
	* 5 11
	* 3 11
	* 3 7
	* 3 7 101
	* 3 7 18
	*/
	int lengthOfLIS(vector<int>& nums)
	{
		vector<int> g;
		g.push_back(nums[0]);
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] > g[g.size()-1])
			{
				g.push_back(nums[i]);
			}
			else {
				// STL ����
				auto pos = lower_bound(g.begin(), g.end(),nums[i]) -g.begin();
				g[pos] = nums[i];

				/* 
				int l = 0, r = g.size()-1;
				while (l < r)
				{
					int mid = (l + r) >> 1;
					if (g[mid] < nums[i])
					{
						l = ++mid;
					}
					else r = mid;
				}
				g[l] = nums[i];
				*/
			}
		}
		return g.size();
	}

	/*

	int lengthOfLIS(vector<int>& nums)
	{
		int n = nums.size();
		vector<int> dp(n);

		for (int i = 0; i < n; i++)
		{
			dp[i] = 1;
			for (int j = 0; j < i; j++)
			{
				if (nums[j] < nums[i])
				{
					dp[i] = max(dp[i], dp[j] + 1);
				}
			}
		}
		return *max_element(dp.begin(), dp.end());
	}
	*/

}s;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> nums = { 0,1,0,3,2,3 };
	cout << s.lengthOfLIS(nums);

}

#endif