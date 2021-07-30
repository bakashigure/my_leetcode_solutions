#if 0
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2)
	{
		int m = nums1.size();
		int n = nums2.size();
		vector<vector<int>> f(m+1, vector<int>(n+1));
		f[0][0]=0;
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (nums1[i-1] == nums2[j-1])
				{
					f[i][j] = f[i - 1][j - 1] + 1;
				}
				else
					f[i][j] = max(f[i - 1][j], f[i][j - 1]);
			}

		}


		return f[m][n];
	}
};

int main()
{

}
#endif