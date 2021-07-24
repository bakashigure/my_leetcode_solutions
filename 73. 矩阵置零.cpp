#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/* bool r,c ��ʾ��һ�к͵�һ���Ƿ����0,
	   ������ÿ������, �������0��Ѹ��к͸����׸���������.
	   �ٱ�����һ�к͵�һ��, ����0�ͰѶ�Ӧ���к�����λ0
	   ����ж�r��c, �����Ƿ���Ҫ�ѵ�һ�к͵�һ������.
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