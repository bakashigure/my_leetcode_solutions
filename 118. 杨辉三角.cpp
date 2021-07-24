#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> res(numRows);
		res[0] = { 1 };
		for (int i = 1; i < numRows; ++i)
		{
			res[i].resize(i + 1);
			res[i][0] = 1;
			res[i][i] = 1;
			for (int j = 1; j < i; j++)
				res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
		}
		return res;
	}
};

int main()
{

}
#endif
	