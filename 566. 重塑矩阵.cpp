#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	// i=x/n , j=x%n
	vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
		int n = mat.size();
		int m = mat[0].size();
		if (r * c != n * m) return mat;
		vector<vector<int>> res(r,vector<int>(c));
		for (int i = 0; i < m * n; i++)
		{
			res[i / c][i % c] = mat[i / m][i % m];
		}
		return res;
	}
};

int main()
{}

#endif