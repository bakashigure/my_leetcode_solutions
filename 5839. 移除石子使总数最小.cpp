#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
	int minStoneSum(vector<int>& piles, int k) {
		int n = piles.size();
		int pile[10001] = { 0 };
		int ans = 0;
		for (auto p : piles)
		{
			pile[p]++;
			ans += p;
		}
		int j = 10000;
		for (int i = 10000; k > 0;)
		{
			if (pile[i])
			{
				ans -= i / 2;
				pile[i]--;
				pile[(i + 1) / 2]++;
				k--;
			}
			else {
				i--;
			}
		}
		return ans;
	}
}s;

int main()
{
	vector<int> piles = { 4,3,6,7 };
	cout << s.minStoneSum(piles, 3);
}



#endif