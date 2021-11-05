#if 0
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
	string countAndSay(int n)
	{
		if (n == 1) return "1";
		string prev = "1";

		for (int i = 2; i <= n; i++)
		{
			string res = "";
			int start = 0;
			int cur = 0;
			while (cur < prev.size())
			{
				while (cur < prev.size()&&prev[start] == prev[cur])
				{
					cur++;
				}
				res += to_string(cur - start) + prev[start];
				start = cur;

			}
			prev = res;
		}
		return prev;
	}
};

int main()
{
	Solution s;
	string res = s.countAndSay(5);
	cout << res;
	return 0;
}


#endif	