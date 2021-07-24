#if 0
#include <iostream>

using namespace std;

class Solution {
public:
	string maximumTime(string time) {
		char res[6] = {};
		
		if (time[0] == '?')
		{
			if (time[1] == '?') res[0] = '2';
			else if (time[1] >= '4') res[0] = '1';
			else res[0] = '2';
		}
		else res[0] = time[0];
		
		if (time[1] == '?')
		{
			if (res[0] == '1') res[1] = '9';
			else if (res[0] == '2') res[1] = '3';
			else if (res[0] == '0') res[1] = '9';
		}
		else res[1] = time[1];
		res[2] = ':';
		res[3] = time[3] == '?' ? '5' : time[3];
		res[4] = time[4] == '?' ? '9' : time[4];
		return string(res);

	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	Solution s;
	string res = s.maximumTime("2?:?0");
	cout << res;
}

#endif