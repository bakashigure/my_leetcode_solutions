#if 0
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
	vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
	{
		int m = mat.size();
		int n = mat[0].size();
		vector<pair<int, int>> power;
		priority_queue < pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> q;
		for (int i = 0; i < m; ++i)
		{
			int l = 0, r = n - 1, pos = -1;
			while (l <= r)
			{
				int mid = (l + r) >> 1;
				if (mat[i][mid] == 0) r = mid - 1;
				else
				{
					pos = mid;
					l = mid + 1;
				}
			}
			pair<int, int> p1(pos + 1, i);
			q.push(p1);
		}
		vector<int> ans;
		for (int i = 0; i < k; ++i)
		{
			ans.push_back(q.top().second);
			q.pop();
		}
		return ans;
	}
};

int main()
{

}
#endif