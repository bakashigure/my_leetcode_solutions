#if 0
#include <iostream>
using namespace std;
class Solution {
public:
	double myPow(double x, int n) {
		double res = 1.0;
		double x_con = x;
		auto quickMul = [&](long long N) {
			while (N > 0)
			{
				if (N & 1) res *= x_con;
				x_con *= x_con;
				N >>= 1;
			}
			return res;
		};
		long long N = n;
		return  N >= 0 ? quickMul(N) : 1.0 / quickMul(-N);
	}
};

int main()
{
	int n = 5;
	n >> 1;
	cout << n;
}
#endif