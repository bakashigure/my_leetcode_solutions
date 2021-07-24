#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int n = prices.size();
		int pre = 0;
		int maxVal = 0;
		for (int i = 1; i < n; i++)
		{
			int diff = prices[i] - prices[i - 1];
			// ��i���������������= ��i-1���������������+�����
			pre = max(pre + diff, 0);
			maxVal = max(maxVal, pre);
		}
		return maxVal;
	}
};


int main()
{

}

#endif