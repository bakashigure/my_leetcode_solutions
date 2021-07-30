#if 0
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int tribonacci(int n)
	{
		if (n == 0 || n == 1) return n;
		else if (n == 2) return 1;
		vector<int> map(n+1);
		map[0] = 0;
		map[1] = 1;
		map[2] = 1;
		int sum = 0;
		for (int i = 3; i <= n; i++)
		{
			map[i] = map[i - 1] + map[i - 2] + map[i - 3];
			
		}
		return map[n];
	}
};
#endif
