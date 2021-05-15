#if 0
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	int getVal(char i) {
		// ÏÂ´ÎÓÃunordered_map  :/
		if (i == 'I') return 1;
		else if (i == 'V') return 5;
		else if (i == 'X') return 10;
		else if (i == 'L') return 50;
		else if (i == 'C') return 100;
		else if (i == 'D') return 500;
		else if (i == 'M') return 1000;
		return 0;
	}
	int romanToInt(string s) {
		int sum = 0;
		int len = s.length();
		for (int i = 0; i < len; i++)
		{
			int val1 = getVal(s[i]);
			//cout << sum << " \n";
			if (i + 1 < len)
			{
				int val2 = getVal(s[i + 1]);
				if (val1 < val2)
				{
					sum = sum - val1 + val2;
					i++;
					continue;
				}
			}
			sum = sum + val1;
		}
		return sum;
	}
};
int main()
{
	Solution s;
	int res = s.romanToInt("III");
	cout << res;
	return 0;
}
#endif