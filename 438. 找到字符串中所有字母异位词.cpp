#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> findAnagrams(string s, string p)
	{
		vector<int> ans;
		vector<int> s_cnt(27);
		vector<int> p_cnt(27);
		int m = s.size();
		int n = p.size();
		int l = 0;
		int r = 0;
		for (char ch : p)
		{
			p_cnt[ch - 97] += 1;
		}
		while (r < m)
		{
			for (; r < m && r - l < n; r++)
			{
				s_cnt[s[r] - 97] += 1;
			}

			if (s_cnt == p_cnt) { 
				ans.push_back(l);
				s_cnt[s[l] - 97]--;
				l++;
			}
			else {
					s_cnt[s[l]-97]--;
					l++;
			}

		}
		return ans;

	}
}s;

int main()
{
	vector<int> ans = s.findAnagrams("cbaebabacd", "abc");
	for (auto item : ans)
		cout << item << " ";
	return 0;
}



#endif