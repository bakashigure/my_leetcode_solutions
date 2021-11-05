#if 0
template<typename T1, typename T2>
constexpr auto vector2(T1 a, T2 b) { return vector<vector<T1>> ((a),vector<T1>((b))); }
#include <__msvc_all_public_headers.hpp>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        auto f = vector2(m, n);
        f[0][0] = grid[0][0];
        for (int i = 1; i < n; i++)
            f[i][0] += f[i - 1][0];
        for (int i = 1; i < m; i++)
            f[0][i] += f[0][i - 1];

        for(int i=1;i<m;i++)
            for (int j = 1; j < n; j++)
            {
                f[i][j] += min(f[i - 1][j], f[i][j - 1]);
            }
        return f[m - 1][n - 1];
    }
};

int main()
{

}

#endif