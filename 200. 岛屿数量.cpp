#if 0
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Solution {
public:
	int numIslands(vector<vector<char>>& grid) {
		int m = grid.size();
		int n = grid[0].size();
		function<void(int x, int y)> dfs = [&](int x, int y)->void {
			grid[x][y] = '0';
			if (x > 0 && grid[x - 1][y] == '1') dfs(x - 1, y);
			if (x < m - 1 && grid[x + 1][y] == '1') dfs(x + 1, y);
			if (y > 0 && grid[x][y - 1] == '1') dfs(x, y - 1);
			if (y < n - 1 && grid[x][y + 1] == '1') dfs(x, y + 1);
		};

		int cnt = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (grid[i][j] == '1')
				{
					cnt++;
					dfs(i, j);
				}
			}
		}

		return cnt;

	}
};

int main()
{

}

#endif