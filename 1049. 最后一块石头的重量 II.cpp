#if 0
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
	int lastStoneWeightII(vector<int>& stones)
	{
		int n = stones.size();
		int sum = accumulate(stones.begin(), stones.end(),0);
		int half = sum >> 1;
		vector<int> dp(sum+1);
		for (int i = 0; i < n; i++)
		{
			for (int j = half; j >= stones[i]; j--)
			{
				dp[j] = max(dp[j], dp[j - stones[i] ]+ stones[i]);
				//cout << "j:" << j << "    dp[j]: " << dp[j] << "  dp[j-stones[i]]:" << dp[j - stones[i]] << "   stones[i]:" << stones[i] << "   dp[half]:" << dp[half];
				//cout << endl;
			}

		}
		return sum - dp[half] - dp[half];


	}
};


int main()
{
	vector<int> stones = { 31,26,33,21,40 };
	Solution s;
	int res = s.lastStoneWeightII(stones);
	cout << res;
	return 0;
}
#endif 