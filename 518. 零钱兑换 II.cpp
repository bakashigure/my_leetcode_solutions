#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int change(int amount, vector<int>& coins)
	{
		int n = coins.size();
		vector<int> dp(amount + 1);
		dp[0] = 1;
		for (int coin : coins)
		{
			for (int i = coin; i <= amount; i++)
			{
				dp[i] += dp[i - coin];
			}
		}
		return dp[amount];
	}
};



/* //朴素解法
class Solution {
public:
	int change(int amount, vector<int>& coins) {
		int n = coins.size();
		vector<vector<int> > f(n + 1, vector<int>(amount + 1));
		f[0][0] = 1; //满足前0个硬币金额0的情况为1，即不选就是0;
		for (int i = 1; i <= n; i++)
		{
			int coin = coins[i - 1];
			for (int j = 0; j <= amount; j++)
			{
				f[i][j] = f[i - 1][j];
				for (int k = 1; k * coin <= j; k++)
				{
					f[i][j] += f[i - 1][j - k * coin];
				}
			}
		}
		return f[n][amount];

	}
};
*/
int main()
{
	vector<int> coins = { 1,2,5 };
	int amount = 5;
	Solution s;
	int res = s.change(amount, coins);
	cout << res;
	return 0;
}

#endif