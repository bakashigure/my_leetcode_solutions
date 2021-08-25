#if 0
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int countDigitOne(int n)
	{
		long long dig = 1, ans = 0;
		int high = n / 10, cur = n % 10, low = 0;
		while (high != 0 || cur != 0)
		{
			if (cur == 0) ans += high * dig;
			else if (cur == 1) ans += high * dig + low + 1;
			else ans += (high + 1) * dig;
			low += cur * dig;
			cur = high % 10;
			high /= 10;
			dig *= 10;

		}
		return ans;



	}
};

#endif	