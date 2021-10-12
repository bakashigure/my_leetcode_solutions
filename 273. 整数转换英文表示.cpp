#if 0
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <vector>
#include <map>

const int hundred = 100;
const int thousand = 1000;
const int million = 1000000;
const int billion = 1000000000;

using namespace std;
class Solution {
public:
	map<int, string> m;
	Solution()
	{
		//m[0] = "";
		m[1] = "One";
		m[2] = "Two";
		m[3] = "Three";
		m[4] = "Four";
		m[5] = "Five";
		m[6] = "Six";
		m[7] = "Seven";
		m[8] = "Eight";
		m[9] = "Nine";
		m[10] = "Ten";
		m[11] = "Eleven";
		m[12] = "Twelve";
		m[13] = "Thirteen";
		m[14] = "Fourteen";
		m[15] = "Fifteen";
		m[16] = "Sixteen";
		m[17] = "Seventeen";
		m[18] = "Eighteen";
		m[19] = "Nineteen";
		m[20] = "Twenty";
		m[30] = "Thirty";
		m[40] = "Forty";
		m[50] = "Fifty";
		m[60] = "Sixty";
		m[70] = "Seventy";
		m[80] = "Eighty";
		m[90] = "Ninety";
		//m[100] = "Hundred";

	}
	string numberToWords(int num) {
		if (num == 0) return "Zero";
		string s;
		if (num >= billion) {
			s += numberToWords(num / billion);
			num %= billion;
			s += " Billion";
		}
		if (num >= million) {
			if (s.size()) {
				s += ' ';
			}
			s += numberToWords(num / million);
			s += " Million";
			num %= million;
		}
		if (num >= thousand) {
			if (s.size()) {
				s += ' ';
			}
			s += numberToWords(num / thousand);
			s += " Thousand";
			num %= thousand;
		}
		if (num >= hundred) {
			if (s.size()) {
				s += ' ';
			}
			s += numberToWords(num / hundred);
			s += " Hundred";
			num %= hundred;
		}

		for (auto [k, v] : m)
		{
			if (num >= k)
			{
				num -= k;
				if (s.size()) s += " ";

				s += v;
			}
		}
		return s;
	}
};

int main()
{
	Solution* s = new Solution();
	s->numberToWords(1);
	return 0;
}


#endif