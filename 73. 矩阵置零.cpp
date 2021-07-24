#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/* bool r,c 表示第一行和第一列是否存在0,
	   随后遍历每个数字, 如果遇到0则把该行和该列首个数字置零.
	   再遍历第一列和第一行, 遇到0就把对应的行和列置位0
	   最后判断r和c, 看看是否需要把第一行和第一列置零.
	   */
	void setZeroes(vector<vector<int>>& matrix) {
		bool r=false;
		bool c=false;
		int m = matrix.size();
		int n = matrix[0].size();

		for(int i = 0 ; i<n;i++)
			if (!matrix[0][i])
			{
				r = true;
				break;
			}

		for (int i = 0; i < m; i++)
			if (!matrix[i][0])
			{
				c = true;
				break;
			}

		for (int i = 1; i < m; i++)
		{
			for (int j = 1; j < n; j++)
			{
				if (!matrix[i][j])
				{
					matrix[0][j] = 0;
					matrix[i][0] = 0;
				}
			}
		}

		for (int i = 1; i < n; i++)
		{
			if (!matrix[0][i])
			{
				for (int j = 1; j < m; j++)
					matrix[j][i] = 0;
			}
		}

		for (int i = 1; i < m; i++)
		{
			if (!matrix[i][0])
			{
				for (int j = 1; j < n; j++)
					matrix[i][j] = 0;
			}
		}

		if (r) {
			for (int i = 0; i < n; i++)
			{
				matrix[0][i] = 0;
			}
		}

		if (c) {
			for (int i = 0; i < m; i++)
				matrix[i][0] = 0;
		}



	}
};

int main()
{}

#endif