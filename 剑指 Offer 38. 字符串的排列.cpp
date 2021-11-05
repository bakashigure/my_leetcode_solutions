#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;



















/*BACKTRACE*/
/*
class Solution {
public:
	vector<string> permutation(string s)
	{
		int vi[8] = { 0 };
		vector<string> res;
		string perm;

		sort(s.begin(), s.end());
		function<void(int, string)> backtrace = [&](int l, string perm) {
			if (l == s.length())
			{
				res.push_back(perm);
				return;
			}
			for (int i = 0; i < s.length(); i++)
			{
				if (vi[i] || (i > 0 && !vi[i - 1] && s[i] == s[i - 1])) continue;
				vi[i] = 1;
				perm.push_back(s[i]);
				backtrace(l + 1, perm);
				perm.pop_back();
				vi[i] = 0;
			}
		};
		backtrace(0, perm);
		return res;

	}
};
*/


#endif