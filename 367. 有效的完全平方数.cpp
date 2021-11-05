#if 1
#include <__msvc_all_public_headers.hpp>
#define ll long long

using namespace std;

class Solution {
public:
	bool isPerfectSquare(int num) {
		ll l = 0;
		ll r = num;
		std::swap()
		while (l <= r)
		{
			ll mid = ((r - l) >> 1) + l;
			long long tmp = mid * mid;
			if (tmp == num) return true;
			else if (tmp > num)
				r = mid - 1;
			else
				l = mid + 1;
		}
		return false;
	}
};

int main()
{
	long long i = 1;
	long long ans = 1;
	while (ans <= 2147483647)
	{
		ans = i * i;
		cout << ans << ',';
		i++;
	}
	// 这表也太大了
	return 0;
}

#endif