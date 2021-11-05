#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;

class Solution {
public:
	void solve(vector<vector<char>>& board) {
		int m = board.size();
		int n = board[0].size();
		vector<vector<int>> visited(m, vector<int>(n));
		function<void(int a, int b)> dfs = [&](int a, int b)->void {
			if (a >= m || a < 0) return;
			if (b >= n || b < 0) return;
			if (board[a][b] == 'X') return;
			if (board[a][b] == 'O' && visited[a][b]) return;
			visited[a][b] = 1;
			dfs(a - 1, b);
			dfs(a + 1, b);
			dfs(a, b - 1);
			dfs(a, b + 1);
		};
		for (int j = 0; j < n; j++)
		{
			dfs(0, j);
			dfs(m - 1, j);
		}
		for (int i = 0; i < m; i++)
		{
			dfs(i, 0);
			dfs(i, n - 1);
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] == 'O' && !visited[i][j])
					board[i][j] = 'X';
			}
		}
	}
};

int main()
{

}

#endif