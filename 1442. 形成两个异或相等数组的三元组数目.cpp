#if 0
#include <iostream>
#include <vector>

using namespace std;
// a = arr[i] ^ arr[i+1] ^ ... ^ arr[j-1]
// b = arr[j] ^ arr[j+1] ^ ... ^ arr[k]
// a==b 可得 sum[i-1]==sum[k] ,每求一个sum, 就对前面的扫一遍看看是否有相同的.
class Solution {
public:
	int countTriplets(vector<int>& arr) {
		int n = arr.size();
		vector<int> sum(n + 1);
		int ans = 0;
		for (int i = 1; i <= n; i++)
		{
			sum[i] = sum[i - 1] ^ arr[i - 1];
			for (int j = 1; j < i; j++)
			{
				if (sum[i] == sum[j - 1])
				{
					//cout << "i:" << i << " j-1:" << j - 1 << endl;
					ans = ans + i - 1 - j + 1;
				}
			}
		}
		return ans;

	}
};

int main()
{
	vector<int> arr = { 1,3,5,7,9 };
	Solution s;
	int res = s.countTriplets(arr);
	cout << res;
	return 0;
}
#endif