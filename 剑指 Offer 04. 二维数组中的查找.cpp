#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target)
	{
		int m = matrix.size();
		if (m == 0) return false;
		int n = matrix[0].size();
		int p = m - 1;
		int q = 0;
		while (p >= 0 && q < n)
		{
			if (matrix[p][q] == target) return true;
			else if (matrix[p][q] > target) p--;
			else q++;
		}
		return false;
	}
}s;
#endif
