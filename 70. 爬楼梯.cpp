#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

	/*¾ØÕó¿ìËÙÃİ*/
	vector<vector<long long>> multipy(vector<vector<long long>> &a,vector<vector<long long>> &b)
	{
		/* 1 2  a b  
		*  3 4  c d
		*/    
		vector<vector<long long>> ans(2, vector<long long>(2));
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
				ans[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
		}
		return ans;
	}

	vector<vector<long long>> matrixPow(vector<vector<long long>>& res, int n)
	{
		vector<vector<long long>> ans = { {1,0},{0,1} };
		while (n > 0)
		{
			if (n & 1) ans = multipy(ans, res);
			n >>= 1;
			res = multipy(res, res);
		}
		return ans;
	}




	int climbStairs(int n)
	{
		vector<vector<long long>> res = { {1,1},{1,0} };
		vector<vector<long long>> ans = matrixPow(res, n);
		return ans[0][0];
	}
};

int main() {
	int n = 14;
	n >>= 1;
	cout << n;
}

#endif