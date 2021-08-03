#if 1=0
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
	int networkDelayTime(vector<vector<int> >& times, int n, int k)
	{
		const int inf = INT_MAX / 2;
		vector<vector<int> > g(n, vector<int>(n, inf));
		vector<int> dist(n, inf);
		vector<bool> used(n, false);
		for (auto& t : times)
		{
			int x = t[0] - 1, y = t[1] - 1;
			g[x][y] = t[2];
		}
		dist[k - 1] = 0;

		for (int i = 0; i < n; i++)
		{
			int x = -1;
			for (int y = 0; y < n; y++)
			{
				if (!used[y] && (x == -1 || dist[y] < dist[x])) x = y;
			}

			used[x] = true;
			for (int y = 0; y < n; y++)
				dist[y] = min(dist[y], dist[x] + g[x][y]);
		}
		int ans = *max_element(dist.begin(), dist.end());
		return ans == inf ? -1 : ans;

	}
};

#endif