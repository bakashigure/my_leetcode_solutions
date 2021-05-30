#if 0
#include <iostream>

using namespace std;
class Solution {
public:
	bool isPowerOfTwo(int n) {
		return n > 0 && (n & (n - 1)) == 0;

	}
};
int main()
{
	int x = 1;
	Solution s;
	bool res = s.isPowerOfTwo(x);
	cout << res;
	return 0;
}

#endif