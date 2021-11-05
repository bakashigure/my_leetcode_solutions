#if 0
#include <__msvc_all_public_headers.hpp>
#define vector2(a,b) vector<vector<int>> ((a),vector<int>((b)))
#define pii pair<int, int>

using namespace std;


/*
* 小根堆。
* 先把最歪一圈加进去，然后从最小的开始寻找，如果存在比四周大的，就说明水可以往下流。

*/
class Solution {
public:
	int trapRainWater(vector<vector<int>>& heightMap) {
		int m = heightMap.size();
		int n = heightMap[0].size();
		int res = 0;
		auto water = vector2(m, n);
		auto visit = vector2(m, n);

		priority_queue<pii, vector<pii>, greater<pii>> pq;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
				{
					pq.push({ heightMap[i][j] , i * n + j });
					visit[i][j] = 1;
				}

		int matrix[5] = { -1,0,1,0,-1 };
		while (!pq.empty())
		{
			pii cell = pq.top();
			pq.pop();
			for (int k = 0; k < 4; k++)
			{
				int nx = cell.second / n + matrix[k];
				int ny = cell.second % n + matrix[k + 1];
				if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visit[nx][ny])
				{
					if (heightMap[nx][ny] < cell.first)
						res += cell.first-heightMap[nx][ny];
					visit[nx][ny] = 1;
					pq.push({ max(heightMap[nx][ny],cell.first),nx * n + ny });
				}
			}

		}
		return res;

	}
};

int main()
{

}


#endif