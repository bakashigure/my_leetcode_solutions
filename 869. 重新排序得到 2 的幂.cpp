#if 0
#include <__msvc_all_public_headers.hpp>
using namespace std;

class Solution {
public:
	bool reorderedPowerOf2(int n)
	{
		string m = to_string(n);
		int len = m.length();
		vector<int> visit;
		visit.resize(len);
		function<bool(int cur,int num)> backtrace = [&](int cur,int num) {
			if (cur == len)
			{
				return (num & (num - 1)) == 0;
			}
			for (int i = 0; i < len; i++)
			{
				if ( num == 0 && m[i] == '0') continue;
				if (visit[i] || (i > 0 && m[i] == m[i - 1]&& !visit[i-1])) continue;
				visit[i] = 1;
				if (backtrace(cur + 1, num * 10 + m[i] - '0')) return true;
				visit[i] = 0;
			}
			return false;

		};
		return backtrace(0, 0);
	}
};

#endif