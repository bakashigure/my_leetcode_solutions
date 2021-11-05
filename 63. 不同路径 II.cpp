#if 0
#include <__msvc_all_public_headers.hpp>
#define vector2(a,b) vector<vector<int>> ((a),vector<int>((b)))
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        auto f = vector2(m, n);
        f[0][0] = 1;
        if (obstacleGrid[0][0] == 1) return 0;
        if (obstacleGrid[m - 1][n - 1] == 1) return 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > 0 && j > 0)
                {
                    if (obstacleGrid[i - 1][j] == 1 && obstacleGrid[i][j - 1] == 1)
                        f[i][j] = 0;
                    else if (obstacleGrid[i - 1][j] == 1) f[i][j] = f[i][j - 1];
                    else if (obstacleGrid[i][j - 1] == 1) f[i][j] = f[i - 1][j];
                    else f[i][j] = f[i - 1][j] + f[i][j - 1];
                }
                else if (i > 0)
                {
                    if (obstacleGrid[i - 1][j] == 1)
                        f[i][j] = 0;
                    else f[i][j] = f[i - 1][j];
                }
                else if (j > 0)
                {
                    if (obstacleGrid[i][j - 1] == 1)
                        f[i][j] = 0;
                    else f[i][j] = f[i][j - 1];
                }
            }
        }
        return f[m - 1][n - 1];
    }
};
int main()
{
    auto m = vector2(4, 5);
    Solution s;
    int res = s.uniquePathsWithObstacles(m);
    return 0;
}

#endif