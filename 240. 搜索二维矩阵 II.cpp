#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target)
	{
		int m = matrix.size();
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

int main()
{
	vector<vector<int>> matrix = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25 } };
	//vector<vector<int>> matrix = { {-5} };
	cout << s.searchMatrix(matrix, -5);
}
#endif
